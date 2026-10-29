// tauri_invoke_responder_sub_140B39980.c — 0x140B39980 (629B)
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// tauri InvokeResolver::respond：'resolver consumed' 双重应答 panic 守卫 + vtable responder 调用
// + flag CAS(+16)/terminating(+17)/WakeByAddressSingle 骨架（与重启机制 sub_1406320F0 同骨架——同为 resolver/app 状态对象方法）。
// 本命令仅 fall-through 错误路径（AppHandle state 缺失）到达。
volatile signed __int64 *__fastcall sub_140B39980(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 *v8; // rbx
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // r13
  __int128 v12; // xmm1
  void (__fastcall *v13)(__int64, _BYTE *, __int128 *, _OWORD *, int, int); // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  char *v17; // rdi
  char v18; // al
  volatile signed __int64 *result; // rax
  _OWORD v20[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  _BYTE v22[360]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v23; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v24; // [rsp+1D0h] [rbp+150h]
  int v25; // [rsp+1D8h] [rbp+158h]
  int v26; // [rsp+1DCh] [rbp+15Ch]
  __int64 v27; // [rsp+1E0h] [rbp+160h]
  __int64 v28; // [rsp+1E8h] [rbp+168h]
  __int128 *v29; // [rsp+1F0h] [rbp+170h]
  __int64 v30; // [rsp+1F8h] [rbp+178h]
  __int64 v31; // [rsp+200h] [rbp+180h]
  __int64 v32; // [rsp+208h] [rbp+188h]
  volatile signed __int64 *v33; // [rsp+210h] [rbp+190h] BYREF
  int v34; // [rsp+218h] [rbp+198h]
  char v35; // [rsp+21Dh] [rbp+19Dh]
  char v36; // [rsp+21Eh] [rbp+19Eh]
  char v37; // [rsp+21Fh] [rbp+19Fh]
  __int64 v38; // [rsp+220h] [rbp+1A0h]

  v38 = -2; /*0x140b3999b*/
  v29 = a4; /*0x140b399a6*/
  v28 = a3; /*0x140b399ad*/
  v30 = a1; /*0x140b399b7*/
  v33 = (volatile signed __int64 *)a2; /*0x140b399be*/
  v7 = a2 + 16; /*0x140b399c5*/
  LOBYTE(a1) = 1; /*0x140b399c9*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 16), 1, 0) ) /*0x140b399cd*/
  {
    v37 = 1; /*0x140b39b3e*/
    sub_141969A30((volatile void *)(a2 + 16)); /*0x140b39b48*/
  }
  v8 = off_142240260; /*0x140b399d8*/
  if ( !(2 * *off_142240260) ) /*0x140b399e2*/
  {
    v9 = 0; /*0x140b399ee*/
    if ( !*(_BYTE *)(a2 + 17) ) /*0x140b399f0*/
      goto LABEL_5; /*0x140b399f6*/
LABEL_16:
    *(_QWORD *)&v20[0] = v7; /*0x140b39b6e*/
    BYTE8(v20[0]) = v9; /*0x140b39b72*/
    sub_14196B5F0( /*0x140b39b98*/
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)v20,
      (unsigned int)&off_141A6F968,
      (__int64)&off_141A81518);
  }
  v37 = 1; /*0x140b39b53*/
  v9 = sub_14196A710(a1, a2, a3); /*0x140b39b5a*/
  LOBYTE(v9) = v9 ^ 1; /*0x140b39b60*/
  if ( *(_BYTE *)(a2 + 17) ) /*0x140b39b62*/
    goto LABEL_16; /*0x140b39b68*/
LABEL_5:
  v34 = v9; /*0x140b399fc*/
  v27 = v7; /*0x140b39a02*/
  v10 = *(_QWORD *)(a2 + 24); /*0x140b39a09*/
  v11 = *(_QWORD *)(a2 + 32); /*0x140b39a0d*/
  *(_QWORD *)(a2 + 24) = 0; /*0x140b39a11*/
  if ( !v10 ) /*0x140b39a1c*/
  {
    v36 = 1; /*0x140b39ba0*/
    sub_14196B590(aResolverConsum, 17, &off_141A81548); /*0x140b39bba*/
  }
  sub_1419234B0(v22, v30, 360); /*0x140b39a44*/
  v23 = *v29; /*0x140b39a5a*/
  v24 = *((_QWORD *)v29 + 2); /*0x140b39a65*/
  v12 = *(_OWORD *)(v28 + 16); /*0x140b39a76*/
  v20[0] = *(_OWORD *)v28; /*0x140b39a7a*/
  v20[1] = v12; /*0x140b39a7e*/
  v21 = *(_QWORD *)(v28 + 32); /*0x140b39a86*/
  v25 = a5; /*0x140b39a8a*/
  v26 = a6; /*0x140b39a91*/
  v32 = v11; /*0x140b39a98*/
  v13 = *(void (__fastcall **)(__int64, _BYTE *, __int128 *, _OWORD *, int, int))(v11 + 24); /*0x140b39a9f*/
  v31 = v10; /*0x140b39ab1*/
  v13(v10, v22, &v23, v20, a5, a6); /*0x140b39abe*/
  v16 = *(_QWORD *)(v32 + 8); /*0x140b39ac8*/
  v17 = (char *)(a2 + 16); /*0x140b39acf*/
  if ( v16 ) /*0x140b39ad3*/
    sub_140001660(v31, v16, *(_QWORD *)(v32 + 16)); /*0x140b39ae0*/
  if ( !(_BYTE)v34 ) /*0x140b39aec*/
  {
    if ( 2 * *v8 ) /*0x140b39af1*/
    {
      v37 = 0; /*0x140b39bd7*/
      if ( !(unsigned __int8)sub_14196A710(v14, v16, v15) ) /*0x140b39bde*/
        *(_BYTE *)(a2 + 17) = 1; /*0x140b39bec*/
    }
  }
  v18 = *v17; /*0x140b39aff*/
  *v17 = 0; /*0x140b39aff*/
  if ( v18 == 2 ) /*0x140b39b03*/
  {
    v37 = 0; /*0x140b39bc2*/
    WakeByAddressSingle((PVOID)(a2 + 16)); /*0x140b39bcc*/
  }
  result = v33; /*0x140b39b09*/
  if ( !_InterlockedDecrement64(v33) ) /*0x140b39b10*/
  {
    v35 = 0; /*0x140b39b16*/
    return (volatile signed __int64 *)sub_141468D10(&v33); /*0x140b39b24*/
  }
  return result; /*0x140b39b2a*/
}
