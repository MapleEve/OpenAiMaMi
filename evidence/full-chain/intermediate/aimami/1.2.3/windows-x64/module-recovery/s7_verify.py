import json, idautils, ida_funcs, ida_dirtree
BASE=r"Z://intermediate/aimami/1.2.3/windows-x64/module-recovery"
dt=ida_dirtree.get_std_dirtree(ida_dirtree.DIRTREE_FUNCS)
# 1. comment count
front=sum(1 for f in idautils.Functions() if "[win前沿分诊]" in (ida_funcs.get_func_cmt(ida_funcs.get_func(f),0) or ""))
# 2. tree count
def count(path):
    dt.chdir(path)
    ite=ida_dirtree.dirtree_iterator_t(); ok=dt.findfirst(ite,"*"); n=0; subs=[]
    while ok:
        de=dt.resolve_cursor(ite.cursor); nm=dt.get_entry_name(de); full=path.rstrip("/")+"/"+nm
        if dt.isdir(full): subs.append(full)
        else: n+=1
        ok=dt.findnext(ite)
    for s in subs: n+=count(s)
    return n
tree=count("/codexmate_lib")
# 3. spot read a couple new module dirs
def peek(path,k=4):
    dt.chdir(path); ite=ida_dirtree.dirtree_iterator_t(); ok=dt.findfirst(ite,"*"); out=[]
    while ok and len(out)<k:
        de=dt.resolve_cursor(ite.cursor); nm=dt.get_entry_name(de)
        if not dt.isdir(path.rstrip("/")+"/"+nm): out.append((nm, "0x%x"%de.idx))
        ok=dt.findnext(ite)
    return out
samples={p:peek("/"+p) for p in ["codexmate_lib/core/voice/aliyun_asr","codexmate_lib/core/relay/proxy_server"]}
res={"front_comment":front,"tree_total":tree,"expected_tree":1192+735,"samples":samples}
json.dump(res,open(BASE+"/s7_verify.json","w",encoding="utf-8"),ensure_ascii=False,indent=1)
print(json.dumps(res,ensure_ascii=False))
