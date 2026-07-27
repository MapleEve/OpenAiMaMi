// addr: 0x14084ad00
// name (owner-map): sub_14084AD00
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_14084AD00(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 *v6; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // r12
  char *v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  __int128 v25; // [rsp+70h] [rbp-10h]
  _QWORD *v26; // [rsp+80h] [rbp+0h]
  int v27; // [rsp+8Ch] [rbp+Ch]
  __int64 v28; // [rsp+90h] [rbp+10h]

  v28 = -2; /*0x14084ad1b*/
  v6 = a1; /*0x14084ad23*/
  if ( !a3[2] ) /*0x14084ad2b*/
  {
    if ( !a4 ) /*0x14084ad47*/
    {
      v23 = 1; /*0x14084ae3b*/
      v15 = 0; /*0x14084ae3f*/
      v5 = 0; /*0x14084ae41*/
LABEL_25:
      *v6 = v15; /*0x14084ae8b*/
      v6[1] = v23; /*0x14084ae92*/
      v6[2] = v5; /*0x14084ae96*/
      v17 = *a3; /*0x14084ae9a*/
      if ( !*a3 ) /*0x14084aea0*/
        return v6; /*0x14084aea0*/
      v18 = a3[1]; /*0x14084aea6*/
LABEL_34:
      sub_140001660(v18, v17, 1); /*0x14084af1c*/
      return v6; /*0x14084af22*/
    }
    v8 = a2; /*0x14084ad4d*/
    v26 = a3; /*0x14084ad50*/
    v9 = a2[1]; /*0x14084ad54*/
    v10 = (char *)(v9 + 16); /*0x14084ad58*/
    LOBYTE(a1) = 1; /*0x14084ad5d*/
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v9 + 16), 1, 0) ) /*0x14084ad61*/
      sub_1416C15B0((volatile void *)(v9 + 16)); /*0x14084af8e*/
    if ( 2 * *off_141EC90B8 ) /*0x14084ad78*/
    {
      v11 = sub_1416C2250(a1, a2); /*0x14084af99*/
      LOBYTE(v11) = v11 ^ 1; /*0x14084af9f*/
      v12 = *(unsigned __int8 *)(v9 + 17); /*0x14084afa1*/
      if ( !(_BYTE)v12 ) /*0x14084afa9*/
      {
LABEL_8:
        v27 = v11; /*0x14084ad94*/
        v13 = *(_QWORD *)(v9 + 40); /*0x14084ad9e*/
        v22 = -1; /*0x14084ada3*/
        if ( v13 ) /*0x14084adae*/
        {
          v14 = 232 * v13; /*0x14084adbd*/
          v5 = *(_QWORD *)(v9 + 32) + 72LL; /*0x14084adc4*/
          while ( *(_QWORD *)(v5 - 56) != a5 || (unsigned int)sub_1416847B0(*(_QWORD *)(v5 - 64), a4, a5) ) /*0x14084adf7*/
          {
            v5 += 232; /*0x14084add0*/
            v14 -= 232; /*0x14084add7*/
            if ( !v14 ) /*0x14084adde*/
              goto LABEL_18; /*0x14084adde*/
          }
          sub_14149C500(&v24, v5); /*0x14084ae00*/
          a2 = (_QWORD *)v24; /*0x14084ae06*/
          if ( (_QWORD)v24 == -1 ) /*0x14084ae0e*/
          {
LABEL_18:
            v10 = (char *)(v9 + 16); /*0x14084ae46*/
            if ( !(_BYTE)v27 ) /*0x14084ae4f*/
              goto LABEL_21; /*0x14084ae4f*/
            goto LABEL_22; /*0x14084ae4f*/
          }
          v23 = *((_QWORD *)&v24 + 1); /*0x14084ae14*/
          v5 = v25; /*0x14084ae18*/
          v10 = (char *)(v9 + 16); /*0x14084ae1f*/
          if ( (_QWORD)v25 ) /*0x14084ae24*/
          {
            v22 = v24; /*0x14084ae2a*/
            if ( !(_BYTE)v27 ) /*0x14084ae32*/
              goto LABEL_21; /*0x14084ae32*/
          }
          else
          {
            if ( (_QWORD)v24 ) /*0x14084af68*/
              sub_140001660(*((_QWORD *)&v24 + 1), v24, 1); /*0x14084af74*/
            v5 = 0; /*0x14084af79*/
            if ( !(_BYTE)v27 ) /*0x14084af80*/
              goto LABEL_21; /*0x14084af80*/
          }
        }
        else if ( !(_BYTE)v27 ) /*0x14084ae57*/
        {
LABEL_21:
          if ( 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v12, a2) ) /*0x14084afef*/
            *(_BYTE *)(v9 + 17) = 1; /*0x14084affd*/
        }
LABEL_22:
        v16 = *v10; /*0x14084ae6f*/
        *v10 = 0; /*0x14084ae71*/
        if ( v16 == 2 ) /*0x14084ae77*/
          WakeByAddressSingle(v10); /*0x14084afe4*/
        v15 = v22; /*0x14084ae7d*/
        a3 = v26; /*0x14084ae85*/
        if ( v22 != -1 ) /*0x14084ae89*/
          goto LABEL_25; /*0x14084ae89*/
        get_api_key(&v24, *v8 + 16LL, a4, a5); /*0x14084aebd*/
        if ( (_DWORD)v24 == 1 ) /*0x14084aec7*/
        {
          if ( *((_QWORD *)&v24 + 1) ) /*0x14084aed0*/
            sub_140001660(v25, *((_QWORD *)&v24 + 1), 1); /*0x14084aedc*/
        }
        else
        {
          v19 = *((_QWORD *)&v24 + 1); /*0x14084aee3*/
          if ( *((_QWORD *)&v24 + 1) != -2 ) /*0x14084aef3*/
          {
            v24 = v25; /*0x14084af42*/
            v20 = v26; /*0x14084af4a*/
            if ( v19 != -1 ) /*0x14084af4e*/
            {
              *v6 = v19; /*0x14084af50*/
              *(_OWORD *)(v6 + 1) = v24; /*0x14084af57*/
              v17 = *v20; /*0x14084af5b*/
              if ( !*v20 ) /*0x14084af5b*/
                return v6; /*0x14084af61*/
LABEL_33:
              v18 = v20[1]; /*0x14084af18*/
              goto LABEL_34; /*0x14084af18*/
            }
LABEL_32:
            *v6 = 0; /*0x14084aef9*/
            v6[1] = 1; /*0x14084af00*/
            v6[2] = 0; /*0x14084af08*/
            v17 = *v20; /*0x14084af10*/
            if ( !*v20 ) /*0x14084af16*/
              return v6; /*0x14084af16*/
            goto LABEL_33; /*0x14084af16*/
          }
        }
        v20 = v26; /*0x14084aef5*/
        goto LABEL_32; /*0x14084aef5*/
      }
    }
    else
    {
      v11 = 0; /*0x14084ad84*/
      v12 = *(unsigned __int8 *)(v9 + 17); /*0x14084ad86*/
      if ( !(_BYTE)v12 ) /*0x14084ad8e*/
        goto LABEL_8; /*0x14084ad8e*/
    }
    *(_QWORD *)&v24 = v9 + 16; /*0x14084afaf*/
    BYTE8(v24) = v11; /*0x14084afb3*/
    sub_1416C3060( /*0x14084afd9*/
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v24,
      (unsigned int)&off_141796230,
      (__int64)&off_141796AF8);
  }
  a1[2] = a3[2]; /*0x14084ad31*/
  *(_OWORD *)a1 = *(_OWORD *)a3; /*0x14084ad39*/
  return v6; /*0x14084af2a*/
}

// --- refs ---
// 0x140001660  sub_140001660
// 0x1416c15b0  sub_1416C15B0
// 0x1416c2250  sub_1416C2250
// 0x1416847b0  sub_1416847B0
// 0x14149c500  sub_14149C500
// 0x141ec90b8  off_141EC90B8
// 0x1416c1670  WakeByAddressSingle
// 0x1404d9190  get_api_key
// 0x1416c3060  sub_1416C3060
// 0x1417966b5  aRelayStatePois_0  // string: "relay state poisoned"
// 0x141796230  off_141796230
// 0x141796af8  off_141796AF8
