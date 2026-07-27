// module: codexmate_lib/core/relay/router_reconciler
// addr: 0x140578740
// name: record_model_catalog_summary
// win 1.2.3 | = mac codexmate_lib::core::relay::router_reconciler::record_model_catalog_summary | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall record_model_catalog_summary(char a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 v9; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v10[18]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v11[8]; // [rsp+C8h] [rbp-40h] BYREF

  if ( *(_BYTE *)a4 )
    v7 = *(_QWORD *)(a4 + 16);
  else
    v7 = 0;
  v9 = v7;
  v10[0] = a4 + 152;
  v10[1] = sub_1414AC520;
  v10[2] = a4 + 160;
  v10[3] = sub_1414AC520;
  v10[4] = a4 + 168;
  v10[5] = sub_1414AC520;
  v10[6] = a4 + 176;
  v10[7] = sub_1414AC520;
  v10[8] = a4 + 184;
  v10[9] = sub_1414AC520;
  v10[10] = a4 + 104;
  v10[11] = sub_1414AC520;
  v10[12] = a4 + 112;
  v10[13] = sub_1414AC520;
  v10[14] = &v9;
  v10[15] = sub_1414AC520;
  v10[16] = a4 + 192;
  v10[17] = sub_1414AC520;
  sub_14149C0F0(v11, &unk_14176209F, v10);
  return sub_14054F5E0(a1, (__int64)aThreadReconcil_0, 16, a2, a3, v11);
}