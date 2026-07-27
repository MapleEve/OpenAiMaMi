import json, IDA decompiler
BASE=r"Z://intermediate/aimami/1.2.3/windows-x64/module-recovery"
susp=json.load(open(BASE+"/s4_nostr_susp.json",encoding="utf-8"))["suspicious_applike"]
pick=susp[:10]
out=[]
for s in pick:
    ea=int(s['ea'],16)
    try: t=str(IDA decompiler.decompile(ea))
    except Exception as e: t="<err %s>"%e
    out.append({"ea":s['ea'],"nbb":s['nbb'],"nc":s['n_callees'],"bizc":s['biz_callees'],"body":t[:700]})
json.dump(out,open(BASE+"/s5_susp_dec.json","w",encoding="utf-8"),ensure_ascii=False,indent=1)
print("done",len(out))
