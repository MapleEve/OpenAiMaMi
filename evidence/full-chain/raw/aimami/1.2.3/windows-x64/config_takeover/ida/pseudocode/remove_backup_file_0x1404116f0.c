// win 1.2.1 | module src/core/relay/config_takeover.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::config_takeover::remove_backup_file | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall remove_backup_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v8; // al
  bool v9; // r12
  bool v10; // dl
  char v11; // r15
  __int64 result; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 *v16; // rcx
  __int128 v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h]
  _QWORD v19[10]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp+10h] BYREF
  const char *v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A0h] [rbp+20h]
  __int64 (__fastcall *v23)(); // [rsp+A8h] [rbp+28h]
  const char *v24; // [rsp+B0h] [rbp+30h]
  __int64 v25; // [rsp+B8h] [rbp+38h]
  __int64 v26; // [rsp+C0h] [rbp+40h]
  const char *v27; // [rsp+C8h] [rbp+48h]
  __int64 v28; // [rsp+D0h] [rbp+50h]
  __int64 v29; // [rsp+D8h] [rbp+58h]
  void *v30; // [rsp+E0h] [rbp+60h]
  _QWORD *v31; // [rsp+E8h] [rbp+68h]
  _QWORD v32[2]; // [rsp+F0h] [rbp+70h] BYREF
  unsigned __int64 v33; // [rsp+100h] [rbp+80h] BYREF
  char v34; // [rsp+10Eh] [rbp+8Eh] BYREF
  char v35; // [rsp+10Fh] [rbp+8Fh] BYREF
  __int64 v36; // [rsp+110h] [rbp+90h]

  v36 = -2; /*0x14041170b*/
  v32[0] = a4; /*0x140411726*/
  v32[1] = a5; /*0x14041172a*/
  v8 = 1; /*0x14041172e*/
  v9 = 0; /*0x140411730*/
  while ( 1 )
  {
    v10 = 1; /*0x140411745*/
    if ( !v9 ) /*0x14041174b*/
      v10 = (unsigned __int8)v8 >= 0xBu; /*0x14041174d*/
    if ( v10 )
      sub_1416C32C0("internal error: entered unreachable code: backup cleanup loop always returns", 153, &off_141753700);
    v9 = v8 == 10; /*0x14041175c*/
    v11 = v8 + 1; /*0x140411760*/
    if ( v8 == 10 ) /*0x140411764*/
      v11 = 10; /*0x140411764*/
    v35 = v8; /*0x140411768*/
    result = sub_141485EF0(a2, a3); /*0x140411774*/
    if ( !result ) /*0x14041177c*/
      break; /*0x14041177c*/
    v13 = result; /*0x140411782*/
    if ( !(unsigned __int8)sub_1403887F0(result) ) /*0x14041178f*/
    {
      v20 = (_QWORD *)v13; /*0x140411967*/
      *(_QWORD *)a1 = -1; /*0x14041196b*/
      v16 = (unsigned __int64 *)&v20; /*0x140411972*/
      return sub_140018650(v16); /*0x140411976*/
    }
    v33 = v13; /*0x140411795*/
    if ( (v13 & 3) != 2 /*0x1404117d9*/
      || ((v14 = HIDWORD(v13), v14 > 0x21) || (v15 = 0x300000020LL, !_bittest64(&v15, v14))) && (_DWORD)v14 != 1224
      || (unsigned __int8)v35 >= 0xAu )
    {
      v20 = v32; /*0x1404118f3*/
      v21 = (const char *)sub_14041F680; /*0x1404118fe*/
      v22 = (__int64)&v33; /*0x140411902*/
      v23 = sub_141490720; /*0x14041190d*/
      sub_14149C0F0(&v17, &unk_141753774, &v20); /*0x140411920*/
      *(_QWORD *)(a1 + 24) = v18; /*0x14041192a*/
      *(_OWORD *)(a1 + 8) = v17; /*0x140411932*/
      *(_QWORD *)a1 = 10; /*0x140411936*/
      v16 = &v33; /*0x14041193d*/
      return sub_140018650(v16); /*0x14041195d*/
    }
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404117ed*/
    {
      v19[0] = &v35; /*0x1404117fa*/
      v19[1] = sub_1414A9660; /*0x140411805*/
      v19[2] = asc_14174C720; /*0x140411810*/
      v19[3] = sub_1414A9660; /*0x140411814*/
      v19[4] = v32; /*0x14041181c*/
      v19[5] = sub_14041F680; /*0x140411827*/
      v19[6] = &v33; /*0x14041182b*/
      v19[7] = sub_141490720; /*0x140411836*/
      v19[8] = &unk_141753718; /*0x140411841*/
      v19[9] = sub_1414AC520; /*0x14041184c*/
      v20 = nullptr; /*0x140411850*/
      v21 = aCodexmateLibCo_15; /*0x14041185f*/
      v22 = 43; /*0x140411863*/
      v23 = nullptr; /*0x14041186b*/
      v24 = aSrcCoreRelayCo; /*0x14041187a*/
      v25 = 33; /*0x14041187e*/
      v26 = 2; /*0x140411886*/
      v27 = aCodexmateLibCo_15; /*0x14041188e*/
      v28 = 43; /*0x140411892*/
      v29 = 0x9900000001LL; /*0x1404118a4*/
      v30 = &unk_141753720; /*0x1404118af*/
      v31 = v19; /*0x1404118b7*/
      sub_1412C36A0(&v34, &v20); /*0x1404118c6*/
    }
    sub_141487490(0, 250000000); /*0x1404118d3*/
    sub_140018650(&v33); /*0x1404118dc*/
    v8 = v11; /*0x1404118e1*/
  }
  *(_QWORD *)a1 = -1; /*0x14041195e*/
  return result; /*0x14041194a*/
}