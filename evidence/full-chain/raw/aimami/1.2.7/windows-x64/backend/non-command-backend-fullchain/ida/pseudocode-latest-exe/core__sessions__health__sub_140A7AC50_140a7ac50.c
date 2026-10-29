// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140a7ac50 | successor of pre-update 0x140355b50 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.528, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140A7AC50(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r14
  __int64 result; // rax
  __int64 v14; // rcx
  _OWORD v15[4]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v16[4]; // [rsp+78h] [rbp-8h] BYREF
  _QWORD v17[4]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v18; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+68h]
  __int128 v20; // [rsp+F0h] [rbp+70h] BYREF
  __m256i v21; // [rsp+100h] [rbp+80h]
  __int64 v22; // [rsp+120h] [rbp+A0h]
  const char *v23; // [rsp+128h] [rbp+A8h]
  __int64 v24; // [rsp+130h] [rbp+B0h]
  __int64 v25; // [rsp+138h] [rbp+B8h]
  void *v26; // [rsp+140h] [rbp+C0h]
  __int64 **v27; // [rsp+148h] [rbp+C8h]
  __int64 v28; // [rsp+158h] [rbp+D8h]
  __int64 *v29; // [rsp+160h] [rbp+E0h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+168h] [rbp+E8h]
  __int64 v31; // [rsp+170h] [rbp+F0h]
  __int64 (__fastcall *v32)(_QWORD, _QWORD); // [rsp+178h] [rbp+F8h]
  __int128 v33; // [rsp+180h] [rbp+100h] BYREF
  __int64 v34; // [rsp+190h] [rbp+110h]
  __int64 v35; // [rsp+198h] [rbp+118h] BYREF
  __int128 v36; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v37; // [rsp+1B0h] [rbp+130h]
  char v38; // [rsp+1BFh] [rbp+13Fh] BYREF
  __int64 v39; // [rsp+1C0h] [rbp+140h]

  v39 = -2;
  v4 = a3;
  v28 = a1;
  *(_QWORD *)&v36 = 0;
  *((_QWORD *)&v36 + 1) = 8;
  v37 = 0;
  v6 = a3 + 24 * a4;
  v7 = 0;
  if ( a3 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v35 = v4;
        v17[0] = &v35;
        v17[1] = &unk_141A6B820;
        v17[2] = &off_141A6B7E0;
        v17[3] = &unk_141A6B7F0;
        sub_140A0CB70((unsigned int)v16, a2, (unsigned int)aUpdateLocalThr, 91, (__int64)v17);
        v4 += 24;
        if ( *(_QWORD *)&v16[0] != -1 )
          break;
        v7 += *((_QWORD *)&v16[0] + 1);
        if ( v4 == v6 )
          goto LABEL_11;
      }
      v15[3] = v16[3];
      v15[2] = v16[2];
      v15[1] = v16[1];
      v15[0] = v16[0];
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v29 = &v35;
        v30 = (__int64 (__fastcall **)())sub_14021E5E0;
        v31 = (__int64)v15;
        v32 = sub_14142D4D0;
        v22 = 2;
        v23 = aCodexmateLibCo_41;
        v24 = 37;
        v26 = &unk_141A6B89B;
        v27 = &v29;
        *(_QWORD *)&v20 = 0;
        *((_QWORD *)&v20 + 1) = aCodexmateLibCo_41;
        *(_OWORD *)v21.m256i_i8 = 0x25u;
        v21.m256i_i64[2] = (__int64)aSrcCoreSession_0;
        v21.m256i_i64[3] = 27;
        v25 = 0x6600000001LL;
        sub_141503E20(&v38, &v20);
      }
      sub_1416DB410(&v18, v35);
      *(_QWORD *)&v33 = 0;
      *((_QWORD *)&v33 + 1) = 1;
      v34 = 0;
      v31 = 1610612768;
      v29 = (__int64 *)&v33;
      v30 = &off_141A6D298;
      if ( (unsigned __int8)sub_14142D4D0(v15, &v29) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v38,
          (unsigned int)&unk_141A69A18,
          (__int64)&off_141A6D350);
      v21.m256i_i64[3] = v34;
      *(_OWORD *)&v21.m256i_u64[1] = v33;
      v20 = v18;
      v21.m256i_i64[0] = v19;
      v12 = v37;
      if ( v37 == (_QWORD)v36 )
        sub_1419396D0(&v36);
      v8 = *((_QWORD *)&v36 + 1);
      v9 = 48 * v12;
      v10 = v20;
      v11 = *(_OWORD *)v21.m256i_i8;
      *(_OWORD *)(*((_QWORD *)&v36 + 1) + v9 + 32) = *(_OWORD *)&v21.m256i_u64[2];
      *(_OWORD *)(v8 + v9 + 16) = v11;
      *(_OWORD *)(v8 + v9) = v10;
      v37 = v12 + 1;
      sub_140A19CC0(v15);
    }
    while ( v4 != v6 );
  }
LABEL_11:
  result = v37;
  v14 = v28;
  *(_QWORD *)(v28 + 16) = v37;
  *(_OWORD *)v14 = v36;
  *(_QWORD *)(v14 + 24) = v7;
  return result;
}
