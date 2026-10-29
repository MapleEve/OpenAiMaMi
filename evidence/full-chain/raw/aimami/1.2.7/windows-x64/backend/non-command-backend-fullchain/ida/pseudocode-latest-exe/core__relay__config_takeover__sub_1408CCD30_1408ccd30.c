// win 1.2.7 latest-exe | module src/core/relay/config_takeover.rs | ea 0x1408ccd30 | successor of pre-update 0x140ef8c50 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.832, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408CCD30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v13)(unsigned __int64); // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __m128i v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h]
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h]
  __m128i v22; // [rsp+80h] [rbp+0h]
  __int64 v23; // [rsp+90h] [rbp+10h]
  _QWORD v24[2]; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v25; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v26; // [rsp+C0h] [rbp+40h]
  __int128 v27; // [rsp+D0h] [rbp+50h]
  __int128 v28; // [rsp+E0h] [rbp+60h]
  __m128i v29; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v30; // [rsp+100h] [rbp+80h]
  unsigned __int64 v31; // [rsp+110h] [rbp+90h] BYREF
  __int64 v32; // [rsp+118h] [rbp+98h] BYREF
  __int64 v33; // [rsp+120h] [rbp+A0h] BYREF
  char v34; // [rsp+12Fh] [rbp+AFh]
  __int64 v35; // [rsp+130h] [rbp+B0h]

  v35 = -2;
  v24[0] = a4;
  v24[1] = a5;
  sub_1416C4520(&v25, a2, a3);
  if ( v25.m128i_i32[0] == 2 )
  {
    v10 = v25.m128i_u64[1];
    v18.m128i_i64[1] = v25.m128i_i64[1];
    v18.m128i_i64[0] = 2;
    v11 = v25.m128i_i8[8] & 3;
    switch ( v25.m128i_i8[8] & 3 )
    {
      case 0:
        goto LABEL_5;
      case 1:
        goto LABEL_15;
      case 2:
        goto LABEL_9;
      case 3:
        goto LABEL_10;
    }
  }
  v18 = v25;
  v23 = v30;
  v22 = _mm_loadu_si128(&v29);
  v21 = v28;
  v20 = v27;
  v19 = v26;
  if ( v25.m128i_i64[0] == 2 )
  {
    v10 = v18.m128i_u64[1];
    v11 = v18.m128i_i8[8] & 3;
    switch ( v18.m128i_i8[8] & 3 )
    {
      case 0:
LABEL_5:
        if ( *(_BYTE *)(v10 + 16) )
          goto LABEL_12;
        goto LABEL_16;
      case 1:
LABEL_15:
        if ( !*(_BYTE *)(v10 + 31) )
          goto LABEL_16;
        goto LABEL_12;
      case 2:
LABEL_9:
        v34 = 1;
        v13 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v9, v8) + 8);
        v34 = 1;
        LOBYTE(v14) = v13(HIDWORD(v10));
        goto LABEL_11;
      case 3:
LABEL_10:
        v14 = HIDWORD(v10);
LABEL_11:
        if ( (_BYTE)v14 )
        {
LABEL_12:
          v31 = v10;
          v25.m128i_i64[0] = (__int64)v24;
          v25.m128i_i64[1] = (__int64)sub_140191200;
          *(_QWORD *)&v26 = &v31;
          *((_QWORD *)&v26 + 1) = sub_1416EA080;
          sub_1416DAFA0(&v16, &unk_141A54C4D, &v25);
          *(_QWORD *)(a1 + 24) = v17;
          *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v16);
          *(_QWORD *)a1 = 10;
          result = v31;
          if ( (v31 & 3) - 2 >= 2 && (v31 & 3) != 0 )
          {
            v25.m128i_i64[1] = v31 - 1;
            v25.m128i_i8[0] = 3;
            v34 = 0;
            result = sub_1416EBAD0(&v25.m128i_u64[1]);
          }
        }
        else
        {
LABEL_16:
          *(_OWORD *)a1 = -1;
          result = (unsigned int)(v11 - 2);
          if ( (unsigned int)result >= 2 )
          {
            if ( v11 )
            {
              v25.m128i_i64[1] = v10 - 1;
              v25.m128i_i8[0] = 3;
              v34 = 0;
              result = sub_1416EBAD0(&v25.m128i_u64[1]);
            }
          }
        }
        break;
    }
  }
  else if ( (v22.m128i_i16[6] & 0x410) != 0 )
  {
    v25.m128i_i64[0] = (__int64)v24;
    v25.m128i_i64[1] = (__int64)sub_140191200;
    result = sub_1416DAFA0(a1 + 8, &unk_141A54C10, &v25);
    *(_QWORD *)a1 = 9;
  }
  else
  {
    sub_1416CC450(&v25, a2, a3);
    result = v25.m128i_i64[1];
    if ( v25.m128i_i64[0] == -1 )
    {
      v33 = v25.m128i_i64[1];
      v25.m128i_i64[0] = (__int64)v24;
      v25.m128i_i64[1] = (__int64)sub_140191200;
      *(_QWORD *)&v26 = &v33;
      *((_QWORD *)&v26 + 1) = sub_1416EA080;
      sub_1416DAFA0(&v18, &unk_141A52395, &v25);
      v25 = v18;
      *(_QWORD *)&v26 = v19;
      if ( (unsigned int)(v33 & 3) - 2 >= 2 && (v33 & 3) != 0 )
      {
        v32 = v33 - 1;
        LOBYTE(v31) = 3;
        sub_1416EBAD0(&v32);
      }
      *(_QWORD *)a1 = 10;
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v25);
      result = v26;
      *(_QWORD *)(a1 + 24) = v26;
    }
    else
    {
      v15 = v26;
      *(__m128i *)(a1 + 8) = v25;
      *(_QWORD *)(a1 + 24) = v15;
      *(_QWORD *)a1 = -1;
    }
  }
  return result;
}
