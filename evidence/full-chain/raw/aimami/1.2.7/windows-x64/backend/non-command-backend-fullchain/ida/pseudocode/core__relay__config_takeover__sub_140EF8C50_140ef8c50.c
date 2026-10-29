// win 1.2.7 | module src/core/relay/config_takeover.rs | ea 0x140ef8c50 | name sub_140EF8C50
// win 1.2.7 | module src/core/relay/config_takeover.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EF8C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 result; // rax
  __m128i *v12; // rdx
  __int64 (__fastcall *v13)(unsigned __int64); // rax
  char v14; // al
  __m128i v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  char v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __m128i v19; // [rsp+48h] [rbp-38h] BYREF
  __m128i *v20; // [rsp+58h] [rbp-28h]
  _QWORD v21[2]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v22; // [rsp+70h] [rbp-10h] BYREF
  __m128i *v23; // [rsp+80h] [rbp+0h]
  __int64 (__fastcall *v24)(_QWORD, _QWORD); // [rsp+88h] [rbp+8h]
  int v25; // [rsp+BCh] [rbp+3Ch]
  __int64 v26; // [rsp+C8h] [rbp+48h] BYREF
  unsigned __int64 v27; // [rsp+D0h] [rbp+50h]
  char v28; // [rsp+DFh] [rbp+5Fh]
  __int64 v29; // [rsp+E0h] [rbp+60h]

  v29 = -2;
  v21[0] = a4;
  v21[1] = a5;
  sub_141695550(&v22, a2, a3);
  if ( v22.m128i_i32[0] == 2 )
  {
    v9 = v22.m128i_i64[1];
    v10 = v22.m128i_i8[8] & 3;
    v27 = v22.m128i_u64[1];
    switch ( v22.m128i_i8[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(v22.m128i_i64[1] + 16) )
          goto LABEL_12;
        goto LABEL_16;
      case 1:
        if ( !*(_BYTE *)(v22.m128i_i64[1] + 31) )
          goto LABEL_16;
        goto LABEL_12;
      case 2:
        v28 = 1;
        v13 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v8, v22.m128i_i64[1]) + 8);
        v28 = 1;
        v14 = v13(HIDWORD(v27));
        v9 = v27;
        if ( !v14 )
          goto LABEL_16;
        goto LABEL_12;
      case 3:
        if ( v22.m128i_i8[12] )
        {
LABEL_12:
          v19.m128i_i64[0] = v9;
          v22.m128i_i64[0] = (__int64)v21;
          v22.m128i_i64[1] = (__int64)sub_140186EE0;
          v23 = &v19;
          v24 = sub_1416BB0B0;
          sub_1416ABFD0(&v15, &unk_141A5C04D, &v22);
          *(_QWORD *)(a1 + 24) = v16;
          *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v15);
          *(_QWORD *)a1 = 10;
          result = v19.m128i_i64[0];
          if ( (v19.m128i_i8[0] & 3u) - 2 >= 2 && (v19.m128i_i8[0] & 3) != 0 )
          {
            v22.m128i_i64[1] = v19.m128i_i64[0] - 1;
            v22.m128i_i8[0] = 3;
            v28 = 0;
            result = sub_1416BCB00(&v22.m128i_u64[1]);
          }
        }
        else
        {
LABEL_16:
          *(_OWORD *)a1 = -1;
          result = (unsigned int)(v10 - 2);
          if ( (unsigned int)result >= 2 )
          {
            if ( v10 )
            {
              v22.m128i_i64[1] = v27 - 1;
              v22.m128i_i8[0] = 3;
              v28 = 0;
              result = sub_1416BCB00(&v22.m128i_u64[1]);
            }
          }
        }
        break;
    }
  }
  else if ( (v25 & 0x410) != 0 )
  {
    v22.m128i_i64[0] = (__int64)v21;
    v22.m128i_i64[1] = (__int64)sub_140186EE0;
    result = sub_1416ABFD0(a1 + 8, &unk_141A5C010, &v22);
    *(_QWORD *)a1 = 9;
  }
  else
  {
    sub_14169D480(&v22, a2, a3);
    result = v22.m128i_i64[1];
    if ( v22.m128i_i64[0] == -1 )
    {
      v26 = v22.m128i_i64[1];
      v22.m128i_i64[0] = (__int64)v21;
      v22.m128i_i64[1] = (__int64)sub_140186EE0;
      v23 = (__m128i *)&v26;
      v24 = sub_1416BB0B0;
      sub_1416ABFD0(&v19, &unk_141A577D7, &v22);
      v22 = v19;
      v23 = v20;
      if ( (unsigned int)(v26 & 3) - 2 >= 2 && (v26 & 3) != 0 )
      {
        v18 = v26 - 1;
        v17 = 3;
        sub_1416BCB00(&v18);
      }
      *(_QWORD *)a1 = 10;
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v22);
      result = (__int64)v23;
      *(_QWORD *)(a1 + 24) = v23;
    }
    else
    {
      v12 = v23;
      *(__m128i *)(a1 + 8) = v22;
      *(_QWORD *)(a1 + 24) = v12;
      *(_QWORD *)a1 = -1;
    }
  }
  return result;
}
