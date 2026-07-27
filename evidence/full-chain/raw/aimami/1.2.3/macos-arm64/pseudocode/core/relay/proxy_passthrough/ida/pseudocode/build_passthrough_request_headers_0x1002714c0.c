// __ZN13codexmate_lib4core5relay17proxy_passthrough33build_passthrough_request_headers @ 0x1002714c0 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::proxy_passthrough::build_passthrough_request_headers::h05d5fd2589246d0e(
        void *a1,
        _QWORD *a2)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  char *v12; // r13
  char *v13; // r13
  unsigned __int8 *v14; // r12
  size_t v15; // rdx
  size_t v16; // r15
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int8 v33; // cl
  char v34; // al
  void *result; // rax
  _BYTE v36[96]; // [rsp+0h] [rbp-1C0h] BYREF
  _QWORD v37[5]; // [rsp+60h] [rbp-160h] BYREF
  _QWORD v38[4]; // [rsp+88h] [rbp-138h] BYREF
  char *v39; // [rsp+A8h] [rbp-118h]
  void *v40; // [rsp+B0h] [rbp-110h]
  _QWORD v41[12]; // [rsp+B8h] [rbp-108h] BYREF
  __int64 v42; // [rsp+118h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+120h] [rbp-A0h]
  __int64 v44; // [rsp+128h] [rbp-98h]
  __int64 v45; // [rsp+130h] [rbp-90h]
  __int64 v46; // [rsp+138h] [rbp-88h]
  __int64 v47; // [rsp+140h] [rbp-80h]
  unsigned __int64 v48; // [rsp+148h] [rbp-78h]
  unsigned __int64 v49; // [rsp+150h] [rbp-70h]
  char **v50; // [rsp+158h] [rbp-68h]
  __int64 v51; // [rsp+160h] [rbp-60h] BYREF
  __int64 v52; // [rsp+168h] [rbp-58h]
  __int64 v53; // [rsp+170h] [rbp-50h]
  __int64 v54; // [rsp+178h] [rbp-48h] BYREF
  __int64 v55; // [rsp+180h] [rbp-40h]
  unsigned __int64 v56; // [rsp+188h] [rbp-38h]
  _BYTE v57[41]; // [rsp+197h] [rbp-29h] BYREF

  v3 = a2[5]; /*0x1002714da*/
  v49 = a2[8]; /*0x1002714e2*/
  http::header::map::HeaderMap$LT$T$GT$::try_with_capacity::h3e56951a2765be79(v41, v49 + v3); /*0x1002714f1*/
  if ( LODWORD(v41[0]) == 3 ) /*0x1002714fd*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100271ae6*/
      "size overflows MAX_SIZE",
      23,
      v57,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
      &off_10195D4D0);
  v40 = a1; /*0x100271503*/
  qmemcpy(v36, v41, sizeof(v36)); /*0x10027151d*/
  v8 = (__int64)&v42; /*0x10027151d*/
  v7 = 0; /*0x10027151d*/
  v56 = v3; /*0x100271522*/
  v47 = a2[4]; /*0x100271530*/
  v39 = (char *)a2[7]; /*0x100271538*/
  v9 = 2 * (unsigned int)(v3 == 0); /*0x10027153f*/
  v10 = 0; /*0x100271541*/
  v50 = &off_101960160; /*0x10027154b*/
LABEL_3:
  while ( v9 != 2 ) /*0x100271554*/
  {
    if ( v10 >= v56 ) /*0x100271574*/
      goto LABEL_61; /*0x100271574*/
    v11 = v47 + 104 * v10; /*0x10027157e*/
    v7 = v48; /*0x100271585*/
    if ( (v9 & 1) == 0 ) /*0x100271589*/
      goto LABEL_13; /*0x100271589*/
    if ( v48 >= v49 ) /*0x10027158f*/
    {
      v10 = v48; /*0x100271aeb*/
      v56 = v49; /*0x100271af2*/
      v50 = &off_101960178; /*0x100271afd*/
LABEL_61:
      core::panicking::panic_bounds_check::h56740b1198b22635(v10, v56, v50, v7); /*0x100271b01*/
    }
    v7 = 9 * v48; /*0x100271595*/
    v4 = (unsigned __int64)v39; /*0x100271599*/
    v12 = &v39[72 * v48]; /*0x1002715a0*/
    v9 = 2; /*0x1002715a4*/
    if ( *((_DWORD *)v12 + 4) == 1 ) /*0x1002715ae*/
    {
      v7 = *((_QWORD *)v12 + 3); /*0x1002715b0*/
      v48 = v7; /*0x1002715b4*/
      v9 = 1; /*0x1002715b8*/
    }
    v13 = v12 + 32; /*0x1002715bd*/
    if ( !*(_QWORD *)(v11 + 64) ) /*0x1002715c1*/
    {
LABEL_12:
      v14 = (unsigned __int8 *)http::header::name::StandardHeader::as_str::h29c468d187218f48( /*0x1002715c8*/
                                 *(unsigned int *)(v11 + 72),
                                 v8,
                                 v4,
                                 v7,
                                 v5,
                                 v6);
      v16 = v15; /*0x1002715d3*/
      goto LABEL_17; /*0x1002715d6*/
    }
LABEL_16:
    v14 = *(unsigned __int8 **)(v11 + 72); /*0x100271602*/
    v16 = *(_QWORD *)(v11 + 80); /*0x100271606*/
LABEL_17:
    v8 = v16; /*0x10027160a*/
    if ( (unsigned __int8)codexmate_lib::core::relay::proxy_passthrough::is_hop_by_hop_or_internal::h3ed1789462754bdd( /*0x100271610*/
                            v14,
                            v16) )
      continue; /*0x100271617*/
    if ( v16 != 11 ) /*0x100271621*/
      goto LABEL_35; /*0x100271621*/
    v17 = *v14; /*0x100271627*/
    v7 = (unsigned int)(v17 - 65); /*0x10027162c*/
    LOBYTE(v7) = v17 | (32 * ((unsigned __int8)(v17 - 65) < 0x1Au)); /*0x100271638*/
    if ( (_BYTE)v7 == 111 ) /*0x10027163d*/
    {
      v18 = v14[1]; /*0x100271643*/
      v7 = (unsigned int)(v18 - 65); /*0x100271649*/
      LOBYTE(v7) = v18 | (32 * ((unsigned __int8)(v18 - 65) < 0x1Au)); /*0x100271655*/
      if ( (_BYTE)v7 == 112 ) /*0x10027165a*/
      {
        v19 = v14[2]; /*0x100271660*/
        v7 = (unsigned int)(v19 - 65); /*0x100271666*/
        LOBYTE(v7) = v19 | (32 * ((unsigned __int8)(v19 - 65) < 0x1Au)); /*0x100271672*/
        if ( (_BYTE)v7 == 101 ) /*0x100271677*/
        {
          v20 = v14[3]; /*0x10027167d*/
          v7 = (unsigned int)(v20 - 65); /*0x100271683*/
          LOBYTE(v7) = v20 | (32 * ((unsigned __int8)(v20 - 65) < 0x1Au)); /*0x10027168f*/
          if ( (_BYTE)v7 == 110 ) /*0x100271694*/
          {
            v21 = v14[4]; /*0x10027169a*/
            v7 = (unsigned int)(v21 - 65); /*0x1002716a0*/
            LOBYTE(v7) = v21 | (32 * ((unsigned __int8)(v21 - 65) < 0x1Au)); /*0x1002716ac*/
            if ( (_BYTE)v7 == 97 ) /*0x1002716b1*/
            {
              v22 = v14[5]; /*0x1002716b7*/
              v7 = (unsigned int)(v22 - 65); /*0x1002716bd*/
              LOBYTE(v7) = v22 | (32 * ((unsigned __int8)(v22 - 65) < 0x1Au)); /*0x1002716c9*/
              if ( (_BYTE)v7 == 105 ) /*0x1002716ce*/
              {
                v23 = v14[6]; /*0x1002716d4*/
                v7 = (unsigned int)(v23 - 65); /*0x1002716da*/
                LOBYTE(v7) = v23 | (32 * ((unsigned __int8)(v23 - 65) < 0x1Au)); /*0x1002716e6*/
                if ( (_BYTE)v7 == 45 ) /*0x1002716eb*/
                {
                  v24 = v14[7]; /*0x1002716f1*/
                  v7 = (unsigned int)(v24 - 65); /*0x1002716f7*/
                  LOBYTE(v7) = v24 | (32 * ((unsigned __int8)(v24 - 65) < 0x1Au)); /*0x100271703*/
                  if ( (_BYTE)v7 == 98 ) /*0x100271708*/
                  {
                    v25 = v14[8]; /*0x10027170e*/
                    v7 = (unsigned int)(v25 - 65); /*0x100271714*/
                    LOBYTE(v7) = v25 | (32 * ((unsigned __int8)(v25 - 65) < 0x1Au)); /*0x100271720*/
                    if ( (_BYTE)v7 == 101 ) /*0x100271725*/
                    {
                      v26 = v14[9]; /*0x10027172b*/
                      v7 = (unsigned int)(v26 - 65); /*0x100271731*/
                      LOBYTE(v7) = v26 | (32 * ((unsigned __int8)(v26 - 65) < 0x1Au)); /*0x10027173d*/
                      if ( (_BYTE)v7 == 116 ) /*0x100271742*/
                      {
                        v27 = v14[10]; /*0x100271748*/
                        v7 = (unsigned int)(v27 - 65); /*0x10027174e*/
                        LOBYTE(v7) = v27 | (32 * ((unsigned __int8)(v27 - 65) < 0x1Au)); /*0x10027175a*/
                        if ( (_BYTE)v7 == 97 ) /*0x10027175f*/
                        {
                          v4 = *((_QWORD *)v13 + 1); /*0x100271765*/
                          v7 = *((_QWORD *)v13 + 2); /*0x100271769*/
                          if ( v7 ) /*0x100271770*/
                          {
                            v28 = 0; /*0x100271772*/
                            while ( 1 ) /*0x100271774*/
                            {
                              v8 = *(unsigned __int8 *)(v4 + v28); /*0x100271774*/
                              LOBYTE(v8) = (unsigned __int8)(v8 - 32) < 0x5Fu || (_BYTE)v8 == 9; /*0x10027178b*/
                              if ( !(_BYTE)v8 ) /*0x10027178e*/
                                break; /*0x10027178e*/
                              if ( v7 == ++v28 ) /*0x100271796*/
                                goto LABEL_34; /*0x100271796*/
                            }
                          }
                          else
                          {
LABEL_34:
                            v8 = 21; /*0x100271798*/
                            if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1002717a4*/
                                                    "responses_websockets=build compact sse body failedupstream_json_decode_failed",
                                                    0x15u,
                                                    (void *)v4) )
                              continue; /*0x1002717ab*/
                          }
LABEL_35:
                          if ( v16 == 38 ) /*0x1002717c4*/
                          {
                            v29 = 0; /*0x1002717ca*/
                            do /*0x100271848*/
                            {
                              if ( v29 == 38 ) /*0x1002717d4*/
                                goto LABEL_3; /*0x1002717d4*/
                              v7 = byte_1015DDB40[v29]; /*0x1002717f4*/
                              if ( (v14[v29] | (unsigned __int8)(32 * ((unsigned __int8)(v14[v29] - 65) < 0x1Au))) != ((unsigned __int8)v7 | (unsigned __int8)(32 * ((unsigned __int8)(v7 - 65) < 0x1Au))) ) /*0x10027180d*/
                                break; /*0x10027180d*/
                              v30 = v14[v29 + 1]; /*0x10027180f*/
                              v4 = (unsigned int)(v30 - 65); /*0x100271815*/
                              LOBYTE(v4) = v30 | (32 * ((unsigned __int8)(v30 - 65) < 0x1Au)); /*0x100271821*/
                              v7 = byte_1015DDB40[v29 + 1]; /*0x10027182a*/
                              v8 = (unsigned int)(v7 - 65); /*0x10027182f*/
                              LOBYTE(v8) = v7 | (32 * ((unsigned __int8)(v7 - 65) < 0x1Au)); /*0x10027183e*/
                              v29 += 2; /*0x100271841*/
                            }
                            while ( (_BYTE)v4 == (_BYTE)v8 ); /*0x100271848*/
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v51, v14, v16, v7, v5, v6); /*0x100271850*/
    v31 = *((_QWORD *)v13 + 1); /*0x10027185f*/
    v4 = *((_QWORD *)v13 + 2); /*0x100271863*/
    if ( !v4 ) /*0x10027186a*/
    {
LABEL_47:
      bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v42, v31, v4); /*0x100271890*/
      v34 = 0; /*0x10027189c*/
      goto LABEL_48; /*0x10027189c*/
    }
    v32 = 0; /*0x10027186c*/
    while ( 1 ) /*0x10027187d*/
    {
      v33 = *(_BYTE *)(v31 + v32); /*0x10027187d*/
      if ( v33 > 0x1Fu ) /*0x100271884*/
        break; /*0x100271884*/
      if ( v33 != 9 ) /*0x100271873*/
        goto LABEL_46; /*0x100271873*/
LABEL_43:
      if ( v4 == ++v32 ) /*0x10027187b*/
        goto LABEL_47; /*0x10027187b*/
    }
    if ( v33 != 127 ) /*0x100271889*/
      goto LABEL_43; /*0x100271889*/
LABEL_46:
    v34 = 2; /*0x10027188b*/
LABEL_48:
    LOBYTE(v46) = v34; /*0x10027189e*/
    v41[0] = v51; /*0x1002718ac*/
    v41[1] = v52; /*0x1002718b3*/
    v41[2] = v53; /*0x1002718be*/
    v41[3] = v54; /*0x1002718c9*/
    v41[4] = v55; /*0x1002718d4*/
    v8 = (__int64)v41; /*0x1002718e2*/
    v41[8] = v45; /*0x1002718e9*/
    v41[7] = v44; /*0x1002718f4*/
    v41[6] = v43; /*0x100271906*/
    v41[5] = v42; /*0x10027190a*/
    v41[9] = v46; /*0x100271915*/
    v7 = (unsigned __int8)v51; /*0x100271919*/
    LOBYTE(v4) = v51 | (v34 == 2); /*0x10027192c*/
    if ( (_BYTE)v4 == 1 ) /*0x100271931*/
    {
      if ( !(_BYTE)v51 ) /*0x100271935*/
      {
        v7 = v41[1]; /*0x100271937*/
        if ( v41[1] ) /*0x100271941*/
        {
          v8 = v41[2]; /*0x100271943*/
          (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v41[1] + 32LL))(&v41[4], v41[2], v41[3]); /*0x100271958*/
          v34 = v41[9]; /*0x10027195b*/
        }
      }
      if ( v34 != 2 ) /*0x100271964*/
      {
        v8 = v41[6]; /*0x100271971*/
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v41[5] + 32LL))(&v41[8], v41[6], v41[7]); /*0x100271986*/
      }
    }
    else
    {
      v38[3] = v41[4]; /*0x100271994*/
      v38[2] = v41[3]; /*0x10027199f*/
      v38[1] = v41[2]; /*0x1002719ae*/
      v38[0] = v41[1]; /*0x1002719b5*/
      v37[0] = v41[5]; /*0x1002719c4*/
      v37[1] = v41[6]; /*0x1002719cb*/
      v37[2] = v41[7]; /*0x1002719d6*/
      v37[3] = v41[8]; /*0x1002719e1*/
      v37[4] = v41[9]; /*0x1002719ec*/
      v8 = (__int64)v36; /*0x1002719fa*/
      http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v42, v36, v38, v37); /*0x100271a0f*/
      if ( (_BYTE)v46 == 3 ) /*0x100271a1b*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100271ac1*/
          "size overflows MAX_SIZE",
          23,
          v57,
          &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
          &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
      v55 = v46; /*0x100271a28*/
      v54 = v45; /*0x100271a33*/
      v53 = v44; /*0x100271a3e*/
      v7 = v42; /*0x100271a42*/
      v4 = v43; /*0x100271a49*/
      v52 = v43; /*0x100271a50*/
      v51 = v42; /*0x100271a54*/
      if ( (_BYTE)v46 != 2 ) /*0x100271a5a*/
      {
        v8 = v52; /*0x100271a64*/
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(v51 + 32))(&v54, v52, v53); /*0x100271a70*/
      }
    }
  }
  if ( ++v10 < v56 ) /*0x10027155d*/
  {
    v11 = v47 + 104 * v10; /*0x100271567*/
LABEL_13:
    v9 = 2; /*0x1002715e0*/
    if ( (*(_BYTE *)v11 & 1) != 0 ) /*0x1002715e8*/
    {
      v7 = *(_QWORD *)(v11 + 8); /*0x1002715ea*/
      v48 = v7; /*0x1002715ee*/
      v9 = 1; /*0x1002715f2*/
    }
    v13 = (char *)(v11 + 24); /*0x1002715f7*/
    if ( !*(_QWORD *)(v11 + 64) ) /*0x100271600*/
      goto LABEL_12; /*0x100271600*/
    goto LABEL_16; /*0x100271600*/
  }
  result = v40; /*0x100271a84*/
  qmemcpy(v40, v36, 0x60u); /*0x100271a8e*/
  return result; /*0x100271a91*/
}