// win 1.2.1 | module src/core/relay/router_unlock_auth.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::router_unlock_auth::read_marker | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_marker(__int64 a1, int a2, int a3)
{
  _QWORD *v4; // rdi
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rdx
  __int128 v15; // [rsp+28h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-48h]
  __int128 v17; // [rsp+48h] [rbp-38h]
  __int128 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+78h] [rbp-8h]
  _QWORD *v22; // [rsp+88h] [rbp+8h] BYREF
  const char *v23; // [rsp+90h] [rbp+10h]
  __int128 v24; // [rsp+98h] [rbp+18h]
  const char *v25; // [rsp+A8h] [rbp+28h]
  __int64 v26; // [rsp+B0h] [rbp+30h]
  __int64 v27; // [rsp+B8h] [rbp+38h]
  const char *v28; // [rsp+C0h] [rbp+40h]
  __int64 v29; // [rsp+C8h] [rbp+48h]
  __int64 v30; // [rsp+D0h] [rbp+50h]
  void *v31; // [rsp+D8h] [rbp+58h]
  _QWORD **v32; // [rsp+E0h] [rbp+60h]
  _QWORD *v33; // [rsp+E8h] [rbp+68h] BYREF
  __int64 (__fastcall *v34)(); // [rsp+F0h] [rbp+70h]
  __int64 v35; // [rsp+F8h] [rbp+78h]
  __int64 v36; // [rsp+100h] [rbp+80h]
  _QWORD *v37; // [rsp+108h] [rbp+88h]
  __int64 v38; // [rsp+110h] [rbp+90h]
  _QWORD *v39; // [rsp+118h] [rbp+98h] BYREF
  char v40; // [rsp+127h] [rbp+A7h] BYREF
  __int64 v41; // [rsp+128h] [rbp+A8h]

  v41 = -2; /*0x14048e7a2*/
  sub_141473FA0((unsigned int)&v19, a2, a3, (unsigned int)&unk_141759E55, 30); /*0x14048e7c4*/
  v36 = v20; /*0x14048e7d5*/
  sub_14148D130(&v15, v20, v21); /*0x14048e7dc*/
  v4 = *((_QWORD **)&v15 + 1); /*0x14048e7e6*/
  if ( (_QWORD)v15 == -1 ) /*0x14048e7ee*/
  {
    if ( (unsigned __int8)sub_140476D40(*((_QWORD *)&v15 + 1)) ) /*0x14048e86a*/
    {
      v39 = v4; /*0x14048e877*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14048e88c*/
      {
        v33 = &v39; /*0x14048e899*/
        v34 = sub_141490720; /*0x14048e8a4*/
        v22 = nullptr; /*0x14048e8a8*/
        v23 = aCodexmateLibCo_20; /*0x14048e8b7*/
        v24 = 0x2Eu; /*0x14048e8bb*/
        v25 = aSrcCoreRelayRo; /*0x14048e8d2*/
        v26 = 36; /*0x14048e8d6*/
        v27 = 2; /*0x14048e8de*/
        v28 = aCodexmateLibCo_20; /*0x14048e8e6*/
        v29 = 46; /*0x14048e8ea*/
        v30 = 0x27200000001LL; /*0x14048e8fc*/
        v31 = &unk_141759EFB; /*0x14048e907*/
        v32 = &v33; /*0x14048e90f*/
        sub_1412C36A0(&v40, &v22); /*0x14048e91e*/
      }
      *(_QWORD *)a1 = -1; /*0x14048e924*/
      result = sub_140018650(&v39); /*0x14048e932*/
    }
    else
    {
      v22 = v4; /*0x14048ea39*/
      *(_QWORD *)a1 = -1; /*0x14048ea3d*/
      result = sub_140018650(&v22); /*0x14048ea48*/
    }
  }
  else
  {
    v22 = *((_QWORD **)&v15 + 1); /*0x14048e7fb*/
    v38 = v15; /*0x14048e7fb*/
    v23 = (const char *)v16; /*0x14048e7ff*/
    v24 = 0; /*0x14048e806*/
    v35 = *((_QWORD *)&v15 + 1); /*0x14048e80a*/
    v25 = *((const char **)&v15 + 1); /*0x14048e80e*/
    v26 = v16; /*0x14048e812*/
    result = sub_1408A78D0(&v15, &v22); /*0x14048e81e*/
    if ( (_QWORD)v15 != -1 ) /*0x14048e829*/
    {
      v6 = v15; /*0x14048e82f*/
      v7 = v16; /*0x14048e833*/
      v8 = v17; /*0x14048e837*/
      *(_OWORD *)(a1 + 48) = v18; /*0x14048e83f*/
      *(_OWORD *)(a1 + 32) = v8; /*0x14048e843*/
      *(_OWORD *)(a1 + 16) = v7; /*0x14048e847*/
      *(_OWORD *)a1 = v6; /*0x14048e84b*/
      v9 = v38; /*0x14048e84e*/
      v10 = v35; /*0x14048e858*/
      if ( !v38 ) /*0x14048e85c*/
        goto LABEL_19; /*0x14048e85c*/
LABEL_18:
      result = sub_140001660(v10, v9, 1); /*0x14048ea81*/
      goto LABEL_19; /*0x14048ea87*/
    }
    v11 = *((_QWORD **)&v15 + 1); /*0x14048e93d*/
    v39 = *((_QWORD **)&v15 + 1); /*0x14048e941*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14048e956*/
    {
      v33 = &v39; /*0x14048e963*/
      v34 = sub_14142D3F0; /*0x14048e96e*/
      v22 = nullptr; /*0x14048e972*/
      v23 = aCodexmateLibCo_20; /*0x14048e981*/
      v24 = 0x2Eu; /*0x14048e985*/
      v25 = aSrcCoreRelayRo; /*0x14048e99c*/
      v26 = 36; /*0x14048e9a0*/
      v27 = 2; /*0x14048e9a8*/
      v28 = aCodexmateLibCo_20; /*0x14048e9b0*/
      v29 = 46; /*0x14048e9b4*/
      v30 = 0x27900000001LL; /*0x14048e9c6*/
      v31 = &unk_141759E73; /*0x14048e9d1*/
      v32 = &v33; /*0x14048e9d9*/
      sub_1412C36A0(&v40, &v22); /*0x14048e9e8*/
      v11 = v39; /*0x14048e9ee*/
    }
    *(_QWORD *)a1 = -1; /*0x14048e9f5*/
    v12 = *v11; /*0x14048e9fc*/
    v13 = *v11 == 1; /*0x14048e9ff*/
    v37 = v11; /*0x14048ea03*/
    if ( v13 ) /*0x14048ea0a*/
    {
      sub_140018650(v11 + 1); /*0x14048ea54*/
    }
    else if ( !v12 ) /*0x14048ea0f*/
    {
      v14 = v37[2]; /*0x14048ea18*/
      if ( v14 ) /*0x14048ea1f*/
        sub_140001660(v37[1], v14, 1); /*0x14048ea32*/
    }
    result = sub_140001660(v37, 40, 8); /*0x14048ea6c*/
    v9 = v38; /*0x14048ea71*/
    v10 = v35; /*0x14048ea7b*/
    if ( v38 ) /*0x14048ea7f*/
      goto LABEL_18; /*0x14048ea7f*/
  }
LABEL_19:
  if ( v19 ) /*0x14048ea93*/
    return sub_140001660(v36, v19, 1); /*0x14048eaa2*/
  return result; /*0x14048eaa8*/
}