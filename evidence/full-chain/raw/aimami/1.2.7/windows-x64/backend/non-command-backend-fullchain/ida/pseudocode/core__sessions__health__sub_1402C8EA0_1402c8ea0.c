// win 1.2.7 | module src/core/sessions/health.rs | ea 0x1402c8ea0 | name sub_1402C8EA0
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402C8EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int128 v7; // kr00_16
  __int64 v8; // r8
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  void *v19; // rax
  __int64 v20; // rcx
  void *v21; // r15
  __int64 v22; // rbx
  __m128i *v23; // rax
  __m128i *v24; // rdi
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  void *v31; // rax
  __int128 v33; // [rsp+28h] [rbp-58h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h]
  __m256i v35; // [rsp+40h] [rbp-40h]
  __int128 v36; // [rsp+60h] [rbp-20h]
  __int128 v37; // [rsp+70h] [rbp-10h]
  __int128 v38; // [rsp+80h] [rbp+0h]
  __int64 v39; // [rsp+90h] [rbp+10h] BYREF
  __int64 v40; // [rsp+98h] [rbp+18h]
  __int64 v41; // [rsp+A0h] [rbp+20h]
  __int128 v42; // [rsp+B0h] [rbp+30h] BYREF
  __m256i v43; // [rsp+C0h] [rbp+40h]
  __int128 v44; // [rsp+E0h] [rbp+60h]
  __int128 v45; // [rsp+F0h] [rbp+70h]
  __int128 v46; // [rsp+100h] [rbp+80h]
  __int64 v47; // [rsp+110h] [rbp+90h]
  char v48; // [rsp+118h] [rbp+98h]
  _BYTE v49[7]; // [rsp+119h] [rbp+99h]
  __m256i v50; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v51; // [rsp+140h] [rbp+C0h]
  __int128 v52; // [rsp+150h] [rbp+D0h]
  __int128 v53; // [rsp+160h] [rbp+E0h]
  __int128 v54; // [rsp+178h] [rbp+F8h]
  unsigned __int64 v55; // [rsp+188h] [rbp+108h]
  __int128 v56; // [rsp+190h] [rbp+110h]
  __int64 v57; // [rsp+1A0h] [rbp+120h]
  _BYTE v58[48]; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v59[48]; // [rsp+1E0h] [rbp+160h]
  __int64 v60; // [rsp+210h] [rbp+190h]
  char v61; // [rsp+218h] [rbp+198h]
  _DWORD v62[3]; // [rsp+219h] [rbp+199h]
  void *v63; // [rsp+228h] [rbp+1A8h]
  __int64 v64; // [rsp+230h] [rbp+1B0h]
  __int64 v65; // [rsp+238h] [rbp+1B8h]

  v65 = -2;
  if ( !a4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 8;
    *(_OWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 8;
    *(_QWORD *)(a1 + 72) = 0;
LABEL_35:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  sub_14100C440((__int64)v58, a2, a3, a4);
  v6 = *(_QWORD *)v58;
  v42 = *(_OWORD *)&v58[8];
  v43.m256i_i64[0] = *(_QWORD *)&v58[24];
  v7 = *(_OWORD *)&v58[32];
  v8 = *(_QWORD *)v59;
  if ( *(_QWORD *)v58 == -1 )
  {
    v57 = v43.m256i_i64[0];
    v56 = v42;
    v10 = *(_QWORD *)&v58[40];
    if ( *(_QWORD *)v59 )
    {
      v11 = 48LL * *(_QWORD *)v59;
      v10 = *(_QWORD *)&v58[40] + 48LL * *(_QWORD *)v59;
      v12 = 0;
      do
      {
        *(_QWORD *)&v58[40] = *(_QWORD *)(*((_QWORD *)&v7 + 1) + v12 + 40);
        *(_OWORD *)&v58[24] = *(_OWORD *)(*((_QWORD *)&v7 + 1) + v12 + 24);
        *(_QWORD *)&v58[16] = *(_QWORD *)(*((_QWORD *)&v7 + 1) + v12 + 16);
        *(_OWORD *)v58 = *(_OWORD *)(*((_QWORD *)&v7 + 1) + v12);
        *(_OWORD *)(*((_QWORD *)&v7 + 1) + v12 + 32) = *(_OWORD *)&v58[32];
        *(_OWORD *)(*((_QWORD *)&v7 + 1) + v12 + 16) = *(_OWORD *)&v58[16];
        v12 += 48;
      }
      while ( v11 != v12 );
    }
    v54 = v7;
    v55 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v10 - *((_QWORD *)&v7 + 1)) >> 4);
    v13 = v57;
    if ( v57 )
    {
      v14 = *((_QWORD *)&v56 + 1);
      if ( (unsigned int)sub_141040BC0((__int64)aChatgpt, 7) == 1
        || (unsigned int)sub_141040BC0((__int64)aCodex_3, 5) == 1 )
      {
        nullsub_1(v15);
        v16 = sub_140001650(48, 8);
        if ( !v16 )
          sub_141938D11(8, 48);
        v18 = v16;
        nullsub_1(v17);
        v19 = (void *)sub_140001650(29, 1);
        if ( !v19 )
        {
          v64 = v18;
          sub_141938D2B(1, 29);
        }
        v21 = v19;
        qmemcpy(v19, "session_delete_client_refresh", 29);
        nullsub_1(v20);
        v22 = 1;
        v23 = (__m128i *)sub_140001650(222, 1);
        if ( !v23 )
        {
          v63 = v21;
          v64 = v18;
          sub_141938D2B(1, 222);
        }
        v24 = v23;
        sub_1418F44E0(v23, (const __m128i *)aChatgptChatgpt, 0xDEu);
        *(_QWORD *)v18 = 29;
        *(_QWORD *)(v18 + 8) = v21;
        *(_QWORD *)(v18 + 16) = 29;
        *(_QWORD *)(v18 + 24) = 222;
        *(_QWORD *)(v18 + 32) = v24;
        *(_QWORD *)(v18 + 40) = 222;
        goto LABEL_34;
      }
      sub_1401B5F40((__int64)&v39, a2);
      v25 = v41;
      v64 = v40;
      if ( !(unsigned __int8)sub_141682B30(v40, v41) )
      {
        v27 = -1;
        v28 = 0;
        goto LABEL_23;
      }
      sub_1402C8680(v58, v64, v25, 0);
      v28 = *(_QWORD *)&v58[8];
      v27 = *(_QWORD *)v58;
      v50 = *(__m256i *)&v58[16];
      v51 = *(_OWORD *)v59;
      v52 = *(_OWORD *)&v59[16];
      v53 = *(_OWORD *)&v59[32];
      if ( v61 == -1 )
      {
        v35 = v50;
        v36 = v51;
        v37 = v52;
        v38 = v53;
        goto LABEL_23;
      }
      *(_DWORD *)v49 = v62[0];
      *(_DWORD *)&v49[3] = *(_DWORD *)((char *)v62 + 3);
      v42 = *(_OWORD *)v58;
      v43 = v50;
      v44 = v51;
      v45 = v52;
      v46 = v53;
      v47 = v60;
      v48 = v61;
      sub_140355B50((__int64)v58, (__int64)&v42, v14, v13);
      if ( *(_QWORD *)&v58[16] )
      {
        v63 = *(void **)&v58[8];
        sub_1416AC440(&v50, *(_QWORD *)&v58[8] + 24LL);
        v28 = v50.m256i_i64[0];
        *(_OWORD *)v35.m256i_i8 = *(_OWORD *)&v50.m256i_u64[1];
        sub_1403FAF90(v58);
        if ( *(_QWORD *)v58 )
          sub_140001660(v63, 48LL * *(_QWORD *)v58, 8);
        v27 = 10;
        sub_14029B090(&v42);
LABEL_23:
        if ( v39 )
          sub_140001660(v64, v39, 1);
        if ( v27 != -1 )
        {
          *(_QWORD *)v58 = v27;
          *(_QWORD *)&v58[8] = v28;
          *(__m256i *)&v58[16] = v35;
          *(_OWORD *)v59 = v36;
          *(_OWORD *)&v59[16] = v37;
          *(_OWORD *)&v59[32] = v38;
          nullsub_1(v26);
          v29 = sub_140001650(48, 8);
          if ( !v29 )
            sub_141938D11(8, 48);
          v64 = v29;
          nullsub_1(v30);
          v31 = (void *)sub_140001650(34, 1);
          if ( !v31 )
            sub_141938D2B(1, 34);
          qmemcpy(v31, "session_delete_catalog_sync_failed", 34);
          v63 = v31;
          *(_QWORD *)&v42 = v58;
          *((_QWORD *)&v42 + 1) = sub_14104A7D0;
          sub_1416ABFD0(&v33, &unk_1419E9FEA, &v42);
          v18 = v64;
          *(_QWORD *)(v64 + 40) = v34;
          *(_OWORD *)(v18 + 24) = v33;
          *(_QWORD *)v18 = 34;
          *(_QWORD *)(v18 + 8) = v63;
          *(_QWORD *)(v18 + 16) = 34;
          sub_14029DA50(v58);
          v22 = 1;
          goto LABEL_34;
        }
        goto LABEL_33;
      }
      sub_1403FAF90(v58);
      if ( *(_QWORD *)v58 )
        sub_140001660(*(_QWORD *)&v58[8], 48LL * *(_QWORD *)v58, 8);
      sub_14029B090(&v42);
      if ( v39 )
        sub_140001660(v64, v39, 1);
    }
LABEL_33:
    v18 = 8;
    v22 = 0;
LABEL_34:
    *(_QWORD *)&v58[16] = v57;
    *(_OWORD *)v58 = v56;
    *(_QWORD *)&v58[40] = v55;
    *(_OWORD *)&v58[24] = v54;
    *(_OWORD *)(a1 + 8) = v56;
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v58[32];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v58[16];
    *(_QWORD *)(a1 + 56) = v22;
    *(_QWORD *)(a1 + 64) = v18;
    *(_QWORD *)(a1 + 72) = v22;
    goto LABEL_35;
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)&v59[40];
  v9 = *(_OWORD *)&v59[8];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v59[24];
  *(_OWORD *)(a1 + 56) = v9;
  *(_QWORD *)(a1 + 24) = v43.m256i_i64[0];
  *(_OWORD *)(a1 + 8) = v42;
  *(_QWORD *)a1 = v6;
  *(_OWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 48) = v8;
  return a1;
}
