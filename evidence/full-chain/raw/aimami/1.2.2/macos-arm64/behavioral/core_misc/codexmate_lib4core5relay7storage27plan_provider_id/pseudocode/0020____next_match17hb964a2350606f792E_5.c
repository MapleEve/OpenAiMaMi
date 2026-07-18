// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x1009c6d80 d=2
__int64 __fastcall _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
        __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r15
  __int64 result; // rax
  unsigned __int64 v6; // r8
  unsigned __int8 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  char v11; // al
  unsigned __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  char v17; // al
  void *__s2; // [rsp+8h] [rbp-58h]
  unsigned __int64 v19; // [rsp+10h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-38h]
  __int64 *v22; // [rsp+30h] [rbp-30h]

  v2 = a2[3]; /*0x1009c6d95*/
  v19 = a2[1]; /*0x1009c6d99*/
  v3 = a2[2]; /*0x1009c6da3*/
  if ( v2 > v19 || v2 < v3 ) /*0x1009c6daa*/
  {
    result = 0; /*0x1009c6db1*/
  }
  else
  {
    v20 = *a2; /*0x1009c6dbe*/
    v6 = *((unsigned __int8 *)a2 + 40); /*0x1009c6dc2*/
    v7 = *((_BYTE *)a2 + v6 + 31); /*0x1009c6dc7*/
    v22 = a1; /*0x1009c6dd1*/
    v21 = v6; /*0x1009c6dd5*/
    if ( v6 >= 5 ) /*0x1009c6dd9*/
    {
      while ( 1 ) /*0x1009c6ed9*/
      {
        v14 = v2 - v3; /*0x1009c6ed9*/
        v15 = v20 + v3; /*0x1009c6ee0*/
        if ( v2 - v3 > 0xF ) /*0x1009c6ee8*/
        {
          v17 = core::slice::memchr::memchr_aligned::hda948616f04379f9(v7, v15, v2 - v3); /*0x1009c6f0c*/
          v6 = v21; /*0x1009c6f11*/
        }
        else
        {
          v16 = 0; /*0x1009c6eea*/
          if ( v14 ) /*0x1009c6eef*/
          {
            while ( *(_BYTE *)(v15 + v16) != v7 ) /*0x1009c6ef5*/
            {
              if ( v14 == ++v16 ) /*0x1009c6efd*/
              {
                v16 = v2 - v3; /*0x1009c6eff*/
                v17 = 0; /*0x1009c6f02*/
                goto LABEL_24; /*0x1009c6f04*/
              }
            }
            v17 = 1; /*0x1009c6f1b*/
          }
          else
          {
            v17 = 0; /*0x1009c6f17*/
          }
        }
LABEL_24:
        if ( (v17 & 1) == 0 ) /*0x1009c6f22*/
          break; /*0x1009c6f22*/
        v3 += v16 + 1; /*0x1009c6f24*/
        a2[2] = v3; /*0x1009c6f29*/
        if ( v3 >= v6 && v3 <= v19 ) /*0x1009c6f37*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v6, 4u, (__int64)&off_10189F9F0); /*0x1009c6f7b*/
        a1 = v22; /*0x1009c6f41*/
        result = 0; /*0x1009c6f45*/
        if ( v2 < v3 ) /*0x1009c6f4a*/
          goto LABEL_29; /*0x1009c6f4a*/
      }
LABEL_28:
      a2[2] = v2; /*0x1009c6f4e*/
      result = 0; /*0x1009c6f52*/
      a1 = v22; /*0x1009c6f54*/
    }
    else
    {
      __s2 = a2 + 4; /*0x1009c6de3*/
      do /*0x1009c6df3*/
      {
        v8 = v2 - v3; /*0x1009c6dfc*/
        v9 = v20 + v3; /*0x1009c6e03*/
        if ( v2 - v3 >= 0x10 ) /*0x1009c6e0b*/
        {
          v11 = core::slice::memchr::memchr_aligned::hda948616f04379f9(v7, v9, v2 - v3); /*0x1009c6e46*/
          v6 = v21; /*0x1009c6e4b*/
          if ( (v11 & 1) == 0 ) /*0x1009c6e51*/
            goto LABEL_28; /*0x1009c6e51*/
        }
        else
        {
          v10 = 0; /*0x1009c6e0d*/
          if ( !v8 ) /*0x1009c6e12*/
            goto LABEL_28; /*0x1009c6e12*/
          while ( *(_BYTE *)(v9 + v10) != v7 ) /*0x1009c6e24*/
          {
            if ( v8 == ++v10 ) /*0x1009c6e2c*/
              goto LABEL_28; /*0x1009c6e2c*/
          }
        }
        v3 += v10 + 1; /*0x1009c6e70*/
        a2[2] = v3; /*0x1009c6e75*/
        v12 = v3 - v6; /*0x1009c6e7c*/
        if ( v3 >= v6 && v3 <= v19 ) /*0x1009c6e86*/
        {
          v13 = memcmp((const void *)(v20 + v12), __s2, v6); /*0x1009c6ea0*/
          v6 = v21; /*0x1009c6ea5*/
          if ( !v13 ) /*0x1009c6eab*/
          {
            a1[1] = v12; /*0x1009c6eb5*/
            a1[2] = v3; /*0x1009c6eb9*/
            result = 1; /*0x1009c6ebd*/
            goto LABEL_29; /*0x1009c6ec2*/
          }
        }
      }
      while ( v2 >= v3 ); /*0x1009c6df3*/
      result = 0; /*0x1009c6ecb*/
    }
  }
LABEL_29:
  *a1 = result; /*0x1009c6f58*/
  return result; /*0x1009c6f5b*/
}