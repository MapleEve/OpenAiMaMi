import json, idautils, ida_funcs, ida_dirtree, ida_name
OUT = r"Z:\\intermediate\aimami\1.2.3\windows-x64\module-recovery\s0_introspect.json"
dt = ida_dirtree.get_std_dirtree(ida_dirtree.DIRTREE_FUNCS)

def list_dir(path):
    dt.chdir(path)
    ite = ida_dirtree.dirtree_iterator_t()
    ok = dt.findfirst(ite, "*")
    dirs=[]; files=0
    while ok:
        de = dt.resolve_cursor(ite.cursor)
        name = dt.get_entry_name(de)
        full = (path.rstrip("/")+"/"+name)
        if dt.isdir(full): dirs.append(name)
        else: files+=1
        ok = dt.findnext(ite)
    return dirs, files

root_dirs, root_files = list_dir("/")
# recurse depth 2 to count funcs per top dir
subtree_counts={}
def count_funcs(path):
    dt.chdir(path)
    ite = ida_dirtree.dirtree_iterator_t()
    ok = dt.findfirst(ite, "*")
    n=0; subs=[]
    while ok:
        de = dt.resolve_cursor(ite.cursor)
        name = dt.get_entry_name(de)
        full = (path.rstrip("/")+"/"+name)
        if dt.isdir(full): subs.append(full)
        else: n+=1
        ok = dt.findnext(ite)
    for s in subs:
        n += count_funcs(s)
    return n

for d in root_dirs:
    subtree_counts[d] = count_funcs("/"+d)

# attribution comment count + named count
attr=0; named=0
for f in idautils.Functions():
    fn=ida_funcs.get_func(f)
    c=ida_funcs.get_func_cmt(fn,0) or ""
    if "attributed via" in c: attr+=1
    nm=ida_funcs.get_func_name(f)
    if not nm.startswith(("sub_","nullsub_","j_","unknown_libname","loc_","def_","SEH_","__")):
        named+=1

res={"root_dirs":root_dirs,"root_files":root_files,"subtree_counts":subtree_counts,
     "attr_comment":attr,"named":named}
with open(OUT.replace("\\","/"),"w") as fh: json.dump(res,fh,indent=1)
print("WROTE",OUT)
