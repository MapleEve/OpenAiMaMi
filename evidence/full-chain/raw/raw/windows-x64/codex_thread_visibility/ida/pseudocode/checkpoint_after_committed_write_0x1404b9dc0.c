// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::checkpoint_after_committed_write | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall checkpoint_after_committed_write(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _OWORD v4[4]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v5[4]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v6[12]; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v7[4]; // [rsp+100h] [rbp+80h] BYREF
  _QWORD v8[2]; // [rsp+120h] [rbp+A0h] BYREF
  char v9; // [rsp+137h] [rbp+B7h] BYREF
  __int64 v10; // [rsp+138h] [rbp+B8h]

  v10 = -2; /*0x1404b9dd0*/
  v8[0] = a2; /*0x1404b9dde*/
  v8[1] = a3; /*0x1404b9de5*/
  result = sub_140FB96B0(v4, a1, aPragmaWalCheck_0, 32); /*0x1404b9e00*/
  if ( *(_QWORD *)&v4[0] != -1 ) /*0x1404b9e0a*/
  {
    v5[3] = v4[3]; /*0x1404b9e20*/
    v5[2] = v4[2]; /*0x1404b9e24*/
    v5[1] = v4[1]; /*0x1404b9e28*/
    v5[0] = v4[0]; /*0x1404b9e2c*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404b9e3e*/
    {
      v7[0] = v8; /*0x1404b9e4b*/
      v7[1] = sub_14041F680; /*0x1404b9e59*/
      v7[2] = v5; /*0x1404b9e64*/
      v7[3] = sub_140FB8910; /*0x1404b9e72*/
      v6[0] = 0; /*0x1404b9e79*/
      v6[1] = aCodexmateLibCo_0; /*0x1404b9e88*/
      v6[2] = 51; /*0x1404b9e8c*/
      v6[3] = 0; /*0x1404b9e94*/
      v6[4] = aSrcCoreRelayCo_0; /*0x1404b9ea3*/
      v6[5] = 41; /*0x1404b9ea7*/
      v6[6] = 2; /*0x1404b9eaf*/
      v6[7] = aCodexmateLibCo_0; /*0x1404b9eb7*/
      v6[8] = 51; /*0x1404b9ebb*/
      v6[9] = 0x3200000001LL; /*0x1404b9ecd*/
      v6[10] = &unk_14175C2C7; /*0x1404b9ed8*/
      v6[11] = v7; /*0x1404b9ee3*/
      sub_1412C36A0(&v9, v6); /*0x1404b9ef2*/
    }
    return sub_14043D020(v5); /*0x1404b9efc*/
  }
  return result; /*0x1404b9f02*/
}