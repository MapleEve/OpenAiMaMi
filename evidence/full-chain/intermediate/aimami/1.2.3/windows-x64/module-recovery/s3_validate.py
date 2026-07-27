import json, idc, ida_funcs, IDA decompiler, ida_xref
BASE=r"Z://intermediate/aimami/1.2.3/windows-x64/module-recovery"
# sample eas across buckets
SAMPLE={
 "GLUE_nostr":[0x140006610],  # will fill dynamically below
}
recl=json.load(open(BASE+"/unk_reclass.json",encoding="utf-8"))
buckets={}
for ea,c,w,ex in recl: buckets.setdefault(w,[]).append(int(ea,16))
pick={}
for w,eas in buckets.items(): pick[w]=eas[:8]
def dec(ea):
    try:
        cf=IDA decompiler.decompile(ea)
        if not cf: return "<no decompile>"
        return str(cf)
    except Exception as e:
        return "<err %s>"%e
out={}
for w,eas in pick.items():
    out[w]=[]
    for ea in eas:
        t=dec(ea)
        # compact: first 900 chars
        out[w].append({"ea":"0x%x"%ea,"body":t[:900]})
json.dump(out,open(BASE+"/s3_samples.json","w",encoding="utf-8"),ensure_ascii=False,indent=1)
print("done buckets:",{k:len(v) for k,v in pick.items()})
