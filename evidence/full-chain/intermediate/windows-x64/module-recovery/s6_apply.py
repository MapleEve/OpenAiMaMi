import json, ida_dirtree, ida_funcs, ida_name, idc, ida_bytes, ida_nalt, ida_xref, idautils
BASE=r"Z://intermediate/aimami/1.2.3/windows-x64/module-recovery"
final=json.load(open(BASE+"/final_decisions.json",encoding="utf-8"))
CMDS=set(l.strip() for l in open(BASE+"/commands.txt",encoding="utf-8") if l.strip())
dt=ida_dirtree.get_std_dirtree(ida_dirtree.DIRTREE_FUNCS)

def ensure_dir(path):
    parts=path.strip("/").split("/")
    cur=""
    for p in parts:
        cur=cur+"/"+p
        if not dt.isdir(cur):
            dt.mkdir(cur)

def cur_abspath(ea):
    de=ida_dirtree.direntry_t(); de.idx=ea
    cur=dt.find_entry(de)
    if cur is None: return None
    return dt.get_abspath(cur)

BASIS_CN={
 "panic_location":"panic-Location 源路径两跳锚定",
 "callgraph>=2":"调用图≥2个已归属App调用者一致",
 "bidir":"双向位于App调用图内(收发均App)",
 "business_string":"引用App业务字符串(DTO/协议/配置/命令词)",
}
applied=0; named=0; errs=[]
for x in final:
    if x['verdict']!='TRUE': continue
    ea=int(x['ea'],16)
    mod=x.get('module') or "codexmate_lib"
    if not mod.startswith("codexmate_lib"): mod="codexmate_lib/"+mod
    dpath="/"+mod
    ensure_dir(dpath)
    src=cur_abspath(ea)
    if not src:
        errs.append((x['ea'],"no_abspath")); continue
    leaf=src.rsplit("/",1)[-1]
    # move into module folder (if not already there)
    if src != dpath+"/"+leaf:
        rc=dt.rename(src, dpath+"/"+leaf)
        if rc not in (0,1):  # 0 ok, 1 already exists
            errs.append((x['ea'],"rename_rc=%d src=%s"%(rc,src)))
    # precise name if business string is a known command
    biz=x.get('biz') or ""
    newname=None
    for c in CMDS:
        if c and c in biz and len(c)>=6:
            newname=c+"_win_owner"; break
    if newname:
        idc.set_name(ea,newname,ida_name.SN_NOWARN|ida_name.SN_FORCE); named+=1
    # func comment
    fn=ida_funcs.get_func(ea)
    basis=BASIS_CN.get(x['basis'],x['basis'])
    extra=(" 业务串:"+biz[:40]) if biz else ""
    cmt="[win前沿分诊] 真App，归入 %s；attributed via %s%s" % (mod, basis, extra)
    ida_funcs.set_func_cmt(fn, cmt, 0)
    applied+=1
print("APPLIED",applied,"NAMED",named,"ERRS",len(errs))
if errs: print("first errs:",errs[:8])
# save
r=idc.save_database("")
print("SAVED", r)
