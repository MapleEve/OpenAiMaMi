// module: codexmate_lib/core/relay/router_reconciler
// addr: 0x140578db0
// name: record_model_catalog_summary_0
// win 1.2.3 | = mac codexmate_lib::core::relay::router_reconciler::record_model_catalog_summary | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall record_model_catalog_summary_0(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v7[14]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v8[6]; // [rsp+A8h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a3 + 16);
  v7[0] = a3 + 24;
  v7[1] = sub_1414AC520;
  v7[2] = a3 + 32;
  v7[3] = sub_1414AC520;
  v7[4] = a3 + 40;
  v7[5] = sub_1414AC520;
  v7[6] = a3 + 48;
  v7[7] = sub_1414AC520;
  v7[8] = a3 + 56;
  v7[9] = sub_1414AC520;
  v7[10] = a3 + 64;
  v7[11] = sub_1414AC520;
  v7[12] = &v6;
  v7[13] = sub_1414AC520;
  sub_14149C0F0(v8, &unk_1417621EE, v7);
  return sub_14054F5E0(0, (__int64)aModelCatalogRe, 23, a1, a2, v8);
}