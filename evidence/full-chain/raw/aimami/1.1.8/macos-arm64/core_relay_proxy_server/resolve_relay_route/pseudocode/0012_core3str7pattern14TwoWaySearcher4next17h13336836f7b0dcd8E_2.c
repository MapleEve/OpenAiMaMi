// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND resolve_relay_route node 0x1005f3770 depth=2
__int64 __fastcall core::str::pattern::TwoWaySearcher::next::h13336836f7b0dcd8(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int8 a7)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rax
  int v9; // edi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdi
  bool v18; // zf
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 result; // rax
  __int64 *v22; // rcx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-50h]
  unsigned __int64 v26; // [rsp+8h] [rbp-48h]
  unsigned __int64 v28; // [rsp+20h] [rbp-30h]

  v7 = a2[4]; /*0x1005f3785*/
  v8 = v7 + a6 - 1; /*0x1005f3789*/
  if ( v8 < a4 ) /*0x1005f3791*/
  {
    v9 = a7; /*0x1005f3797*/
    v25 = a6 - 1; /*0x1005f379f*/
    v10 = a2[3]; /*0x1005f37a3*/
    v11 = *a2; /*0x1005f37a7*/
    v26 = a2[2]; /*0x1005f37b1*/
    v12 = a2[6]; /*0x1005f37bc*/
    v28 = v10; /*0x1005f37c0*/
    do /*0x1005f37dd*/
    {
      if ( _bittest64((const __int64 *)&v10, *(unsigned __int8 *)(a3 + v8)) ) /*0x1005f37e7*/
      {
        v14 = v11; /*0x1005f37f0*/
        if ( v12 > v11 ) /*0x1005f37f3*/
          v14 = v12; /*0x1005f37f3*/
        v15 = v9; /*0x1005f37f7*/
        if ( (_BYTE)v9 ) /*0x1005f37fd*/
          v14 = v11; /*0x1005f37fd*/
        v16 = v14; /*0x1005f3805*/
        do /*0x1005f3832*/
        {
          if ( v16 >= a6 ) /*0x1005f3813*/
          {
            v19 = v12; /*0x1005f3873*/
            if ( (_BYTE)v15 ) /*0x1005f387b*/
              v19 = 0; /*0x1005f387b*/
            v20 = v11; /*0x1005f387f*/
            do /*0x1005f38b7*/
            {
              if ( v19 >= v20 ) /*0x1005f3893*/
              {
                v23 = v7 + a6; /*0x1005f38e6*/
                a2[4] = v23; /*0x1005f38e9*/
                if ( !(_BYTE)v15 ) /*0x1005f38f0*/
                  a2[6] = 0; /*0x1005f38f2*/
                v22 = a1; /*0x1005f38fa*/
                a1[1] = v7; /*0x1005f38fe*/
                a1[2] = v23; /*0x1005f3902*/
                result = 1; /*0x1005f3906*/
                goto LABEL_32; /*0x1005f3906*/
              }
              if ( --v20 >= a6 ) /*0x1005f389b*/
                core::panicking::panic_bounds_check::h56740b1198b22635(v20, a6, (__int64)&off_101534748); /*0x1005f3958*/
              if ( v20 + v7 >= a4 ) /*0x1005f38a8*/
                core::panicking::panic_bounds_check::h56740b1198b22635(v20 + v7, a4, (__int64)&off_101534760); /*0x1005f3946*/
            }
            while ( *(_BYTE *)(a5 + v20) == *(_BYTE *)(a3 + v20 + v7) ); /*0x1005f38b7*/
            v7 += v26; /*0x1005f38b9*/
            a2[4] = v7; /*0x1005f38bd*/
            v13 = a6 - v26; /*0x1005f38c1*/
            v9 = v15; /*0x1005f38c5*/
            v10 = v28; /*0x1005f38cb*/
            if ( !(_BYTE)v15 ) /*0x1005f38cf*/
              goto LABEL_4; /*0x1005f38cf*/
            goto LABEL_5; /*0x1005f38cf*/
          }
          if ( v7 + v16 >= a4 ) /*0x1005f381c*/
          {
            v24 = v7 + v14; /*0x1005f391d*/
            if ( a4 > v24 ) /*0x1005f3923*/
              v24 = a4; /*0x1005f3923*/
            core::panicking::panic_bounds_check::h56740b1198b22635(v24, a4, (__int64)&off_101534778); /*0x1005f3934*/
          }
          v17 = v16 + 1; /*0x1005f3822*/
          v18 = *(_BYTE *)(a5 + v16) == *(_BYTE *)(a3 + v7 + v16); /*0x1005f382b*/
          ++v16; /*0x1005f382f*/
        }
        while ( v18 ); /*0x1005f3832*/
        v7 = v17 + v7 - v11; /*0x1005f3837*/
        a2[4] = v7; /*0x1005f383a*/
        v9 = v15; /*0x1005f383e*/
        if ( !(_BYTE)v15 ) /*0x1005f3844*/
        {
          v13 = 0; /*0x1005f37c6*/
          v10 = v28; /*0x1005f37c8*/
          goto LABEL_4; /*0x1005f37c8*/
        }
        v10 = v28; /*0x1005f3846*/
      }
      else
      {
        v7 += a6; /*0x1005f3850*/
        a2[4] = v7; /*0x1005f3853*/
        if ( !(_BYTE)v9 ) /*0x1005f385a*/
        {
          v13 = 0; /*0x1005f3860*/
LABEL_4:
          a2[6] = v13; /*0x1005f37cc*/
          v12 = v13; /*0x1005f37d0*/
        }
      }
LABEL_5:
      v8 = v7 + v25; /*0x1005f37d3*/
    }
    while ( v7 + v25 < a4 ); /*0x1005f37dd*/
  }
  a2[4] = a4; /*0x1005f38da*/
  result = 0; /*0x1005f38de*/
  v22 = a1; /*0x1005f38e0*/
LABEL_32:
  *v22 = result; /*0x1005f390b*/
  return result; /*0x1005f390e*/
}