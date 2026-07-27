// win 1.2.1 | module src/core/relay/keychain.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::keychain::get_api_key | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall get_api_key(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  const char *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h] BYREF
  __int64 v23; // [rsp+80h] [rbp+0h]
  __int64 v24; // [rsp+88h] [rbp+8h]
  __int64 *v25; // [rsp+98h] [rbp+18h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+A0h] [rbp+20h]
  __int128 *v27; // [rsp+A8h] [rbp+28h]
  __int64 (__fastcall *v28)(); // [rsp+B0h] [rbp+30h]
  __int128 v29; // [rsp+B8h] [rbp+38h] BYREF
  const char *v30; // [rsp+C8h] [rbp+48h]
  __int64 v31; // [rsp+D0h] [rbp+50h]
  char **v32; // [rsp+D8h] [rbp+58h]
  __int64 v33; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+68h]
  __int64 v35; // [rsp+F0h] [rbp+70h]
  __int64 v36; // [rsp+F8h] [rbp+78h]
  __int64 v37; // [rsp+100h] [rbp+80h]

  v37 = -2; /*0x1404d91a7*/
  v5 = a3; /*0x1404d91b5*/
  v33 = a3; /*0x1404d91be*/
  v34 = a4; /*0x1404d91c2*/
  sub_140AE73A0(&v29, a3, a4); /*0x1404d91d0*/
  if ( (_QWORD)v29 == -1 ) /*0x1404d91da*/
  {
    v8 = *(_QWORD *)(a2 + 776); /*0x1404d91f8*/
    v9 = *(_QWORD *)(a2 + 784); /*0x1404d91ff*/
    sub_1404D97B0((unsigned int)&v29, v8, v9, v5, a4); /*0x1404d9218*/
    v10 = *((_QWORD *)&v29 + 1); /*0x1404d921d*/
    v11 = v30; /*0x1404d9221*/
    v12 = v31; /*0x1404d9225*/
    if ( (_DWORD)v29 == 1 ) /*0x1404d922d*/
    {
      a1[2] = v30; /*0x1404d922f*/
      a1[3] = v12; /*0x1404d9233*/
      a1[1] = v10; /*0x1404d9237*/
      *a1 = 1; /*0x1404d923b*/
      return a1; /*0x1404d9242*/
    }
    if ( *((_QWORD *)&v29 + 1) != -1 ) /*0x1404d924b*/
    {
      if ( v31 ) /*0x1404d9250*/
      {
        a1[1] = *((_QWORD *)&v29 + 1); /*0x1404d9252*/
        a1[2] = v11; /*0x1404d9256*/
        a1[3] = v12; /*0x1404d925a*/
LABEL_38:
        *a1 = 0; /*0x1404d95fc*/
        return a1; /*0x1404d95fc*/
      }
      if ( *((_QWORD *)&v29 + 1) ) /*0x1404d9266*/
        sub_140001660(v30, *((_QWORD *)&v29 + 1), 1); /*0x1404d926e*/
    }
    sub_1404DA710((unsigned int)&v18, v8, v9, v33, v34); /*0x1404d928a*/
    if ( (_QWORD)v18 != -1 ) /*0x1404d9297*/
    {
      v13 = v19; /*0x1404d92a1*/
      if ( v19 ) /*0x1404d92a8*/
      {
        v35 = *((_QWORD *)&v18 + 1); /*0x1404d92bf*/
        v36 = v18; /*0x1404d92bf*/
        sub_1404D9C20((unsigned int)&v20, v8, v9, v33, v34, *((__int64 *)&v18 + 1), v19); /*0x1404d92d7*/
        if ( (_QWORD)v20 == -1 ) /*0x1404d92e2*/
        {
          if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x1404d94f3*/
          {
            v25 = &v33; /*0x1404d94fd*/
            v26 = sub_14041F680; /*0x1404d9508*/
            *(_QWORD *)&v29 = aCodexmateLibCo_23; /*0x1404d9513*/
            *((_QWORD *)&v29 + 1) = 36; /*0x1404d9517*/
            v30 = aCodexmateLibCo_23; /*0x1404d951f*/
            v31 = 36; /*0x1404d9523*/
            v32 = &off_14175DD60; /*0x1404d9532*/
            sub_140985BA0(&unk_14175DCFC, &v25, 3, &v29); /*0x1404d954b*/
          }
          goto LABEL_37; /*0x1404d9551*/
        }
        v23 = v21; /*0x1404d92ec*/
        v22 = v20; /*0x1404d92f4*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d9306*/
        {
          v25 = &v33; /*0x1404d930c*/
          v26 = sub_14041F680; /*0x1404d9317*/
          v27 = &v22; /*0x1404d931f*/
          v28 = sub_1400015F0; /*0x1404d932a*/
          *(_QWORD *)&v29 = aCodexmateLibCo_23; /*0x1404d9335*/
          *((_QWORD *)&v29 + 1) = 36; /*0x1404d9339*/
          v30 = aCodexmateLibCo_23; /*0x1404d9341*/
          v31 = 36; /*0x1404d9345*/
          v32 = &off_14175DDE8; /*0x1404d9354*/
          sub_140985BA0(&unk_14175DD9C, &v25, 2, &v29); /*0x1404d936d*/
        }
        v14 = v22; /*0x1404d9373*/
        if ( (_QWORD)v22 ) /*0x1404d937a*/
        {
          v15 = *((_QWORD *)&v22 + 1); /*0x1404d9380*/
LABEL_29:
          sub_140001660(v15, v14, 1); /*0x1404d94d5*/
          goto LABEL_37; /*0x1404d94e0*/
        }
        goto LABEL_37; /*0x1404d937a*/
      }
      if ( (_QWORD)v18 ) /*0x1404d938c*/
        sub_140001660(*((_QWORD *)&v18 + 1), v18, 1); /*0x1404d9394*/
    }
    sub_1404DA0B0(&v22, v33, v34); /*0x1404d93a5*/
    if ( (_BYTE)v22 ) /*0x1404d93ae*/
    {
      a1[1] = -1; /*0x1404d93b0*/
      *a1 = 0; /*0x1404d93b8*/
      v16 = *((_QWORD *)&v22 + 1); /*0x1404d93bf*/
      if ( !*((_QWORD *)&v22 + 1) ) /*0x1404d93c6*/
        return a1; /*0x1404d93c6*/
    }
    else
    {
      v16 = *((_QWORD *)&v22 + 1); /*0x1404d93e0*/
      if ( *((_QWORD *)&v22 + 1) == -1 ) /*0x1404d93e8*/
      {
        a1[1] = -1; /*0x1404d9556*/
        goto LABEL_38; /*0x1404d955e*/
      }
      v13 = v24; /*0x1404d93ee*/
      if ( v24 ) /*0x1404d93f5*/
      {
        v36 = *((_QWORD *)&v22 + 1); /*0x1404d93fb*/
        v35 = v23; /*0x1404d9410*/
        sub_1404D9C20((unsigned int)&v18, v8, v9, v33, v34, v23, v24); /*0x1404d9428*/
        if ( (_QWORD)v18 == -1 ) /*0x1404d9433*/
        {
          if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x1404d958e*/
          {
            v25 = &v33; /*0x1404d9594*/
            v26 = sub_14041F680; /*0x1404d959f*/
            *(_QWORD *)&v29 = aCodexmateLibCo_23; /*0x1404d95aa*/
            *((_QWORD *)&v29 + 1) = 36; /*0x1404d95ae*/
            v30 = aCodexmateLibCo_23; /*0x1404d95b6*/
            v31 = 36; /*0x1404d95ba*/
            v32 = &off_14175DE40; /*0x1404d95c9*/
            sub_140985BA0(&unk_14175DE00, &v25, 3, &v29); /*0x1404d95e2*/
          }
          goto LABEL_37; /*0x1404d95e2*/
        }
        v21 = v19; /*0x1404d943d*/
        v20 = v18; /*0x1404d9445*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d9457*/
        {
          v25 = &v33; /*0x1404d945d*/
          v26 = sub_14041F680; /*0x1404d9468*/
          v27 = &v20; /*0x1404d9470*/
          v28 = sub_1400015F0; /*0x1404d947b*/
          *(_QWORD *)&v29 = aCodexmateLibCo_23; /*0x1404d9486*/
          *((_QWORD *)&v29 + 1) = 36; /*0x1404d948a*/
          v30 = aCodexmateLibCo_23; /*0x1404d9492*/
          v31 = 36; /*0x1404d9496*/
          v32 = &off_14175DE98; /*0x1404d94a5*/
          sub_140985BA0(&unk_14175DE58, &v25, 2, &v29); /*0x1404d94be*/
        }
        v14 = v20; /*0x1404d94c4*/
        if ( (_QWORD)v20 ) /*0x1404d94cb*/
        {
          v15 = *((_QWORD *)&v20 + 1); /*0x1404d94d1*/
          goto LABEL_29; /*0x1404d94d1*/
        }
LABEL_37:
        a1[1] = v36; /*0x1404d95e8*/
        a1[2] = v35; /*0x1404d95f4*/
        a1[3] = v13; /*0x1404d95f8*/
        goto LABEL_38; /*0x1404d95f8*/
      }
      a1[1] = -1; /*0x1404d9563*/
      *a1 = 0; /*0x1404d956b*/
      if ( !v16 ) /*0x1404d9575*/
        return a1; /*0x1404d9575*/
    }
    sub_140001660(v23, v16, 1); /*0x1404d93d6*/
    return a1; /*0x1404d93db*/
  }
  a1[3] = v30; /*0x1404d91e0*/
  *(_OWORD *)(a1 + 1) = v29; /*0x1404d91e8*/
  *a1 = 1; /*0x1404d91ec*/
  return a1; /*0x1404d9606*/
}