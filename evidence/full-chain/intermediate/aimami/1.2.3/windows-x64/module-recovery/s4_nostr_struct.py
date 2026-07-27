import json, idc, ida_funcs, ida_gdl, ida_xref
BASE=r"Z://intermediate/aimami/1.2.3/windows-x64/module-recovery"
final=json.load(open(BASE+"/final_decisions.json",encoding="utf-8"))
# no_string GLUE eas
eas=[int(x['ea'],16) for x in final if x['verdict']=='GLUE' and x['basis']=='no_string_runtime_glue']
# set of TRUE verdict eas + attributed set for "calls business" check
true_eas=set(int(x['ea'],16) for x in final if x['verdict']=='TRUE')
modmap=json.load(open(BASE+"/attr_modmap.json",encoding="utf-8"))
attr=set(int(k,16) for k in modmap)
def callees(fea):
    f=ida_funcs.get_func(fea); 
    if not f: return set()
    res=set(); ea=f.start_ea
    while ea<f.end_ea:
        c=ida_xref.get_first_cref_from(ea)
        while c not in (idc.BADADDR,-1,0xffffffffffffffff):
            g=ida_funcs.get_func(c)
            if g and g.start_ea!=fea: res.add(g.start_ea)
            c=ida_xref.get_next_cref_from(ea,c)
        ea=idc.next_head(ea,f.end_ea)
    return res
def nbb(fea):
    f=ida_funcs.get_func(fea)
    try: return ida_gdl.FlowChart(f).size
    except: return 0
susp=[]
for fea in eas:
    cs=callees(fea)
    bizc=len([c for c in cs if c in true_eas or c in attr])
    bb=nbb(fea)
    # App-like: calls >=3 distinct funcs incl >=1 business AND branching >=6 blocks
    if bizc>=1 and len(cs)>=3 and bb>=6:
        susp.append({"ea":"0x%x"%fea,"n_callees":len(cs),"biz_callees":bizc,"nbb":bb})
json.dump({"total_nostr":len(eas),"suspicious_applike":susp},open(BASE+"/s4_nostr_susp.json","w"),ensure_ascii=False,indent=1)
print("nostr",len(eas),"app-like-suspicious",len(susp))
