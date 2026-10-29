// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140740250 | successor of pre-update 0x14026e5e0 | session <审计会话>
// match evidence: {"body_sim": 0.865, "str_ov": 0, "anchor": 1.2, "conf": false, "verdict": "CONFIRMED_FINAL"}
_QWORD *__fastcall sub_140740250(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // rax
  void (__fastcall **v18)(__int64); // rsi
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int128 v23; // xmm0
  _QWORD *v24; // rax
  __int128 v25; // [rsp+78h] [rbp-8h] BYREF
  __int64 v26; // [rsp+88h] [rbp+8h]
  _OWORD v27[2]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v28[2]; // [rsp+B0h] [rbp+30h] BYREF
  _OWORD v29[2]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+E0h] [rbp+60h]
  __int64 v31; // [rsp+E8h] [rbp+68h]
  __int64 v32; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v33; // [rsp+F8h] [rbp+78h]
  __int128 v34; // [rsp+100h] [rbp+80h] BYREF
  __int128 v35; // [rsp+110h] [rbp+90h]
  __int64 *v36; // [rsp+120h] [rbp+A0h]
  __int64 (__fastcall *v37)(_QWORD, _QWORD); // [rsp+128h] [rbp+A8h]
  __int64 v38; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v39; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v40; // [rsp+140h] [rbp+C0h]
  _QWORD *v41; // [rsp+150h] [rbp+D0h]
  __int64 v42; // [rsp+158h] [rbp+D8h]
  __int64 v43; // [rsp+160h] [rbp+E0h]
  __int64 v44; // [rsp+168h] [rbp+E8h]

  v44 = -2;
  sub_140A92FF0(&v34, a2, a3);
  v7 = *((_QWORD *)&v34 + 1);
  v42 = v34;
  v41 = a1;
  if ( (_QWORD)v34 )
  {
    v31 = a2;
    v30 = a3;
    v39 = 0;
    *(_QWORD *)&v40 = 1;
    v32 = 0;
    v43 = *((_QWORD *)&v34 + 1);
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*((_QWORD *)&v34 + 1) + 112LL);
    v9 = 0;
    v33 = 0;
    while ( 1 )
    {
      *((_QWORD *)&v40 + 1) = 0;
      LOBYTE(v6) = 10;
      if ( v8(v42, v6, &v39) == 1 )
      {
        v17 = v41;
        *v41 = 2;
        v17[1] = v10;
        v18 = (void (__fastcall **)(__int64))v43;
        v19 = v39;
        if ( !v39 )
          goto LABEL_30;
        goto LABEL_29;
      }
      if ( !v10 )
        break;
      v32 = ++v9;
      v11 = *((_QWORD *)&v40 + 1);
      v12 = v40;
      if ( (unsigned __int8)sub_14073F1D0(v40, *((_QWORD *)&v40 + 1), aToolSearchCall, 16)
        && (unsigned __int8)sub_14073F1D0(v12, v11, aTs, 3)
        || (unsigned __int8)sub_14073F1D0(v12, v11, aCustomToolCall, 16)
        && ((unsigned __int8)sub_14073F1D0(v12, v11, aCt, 3) || (unsigned __int8)sub_14073F1D0(v12, v11, aFc, 3)) )
      {
        v34 = v40;
        v35 = 0;
        vendor_json_parse_str_with_trailing_check(v27, &v34);
        if ( LOBYTE(v27[0]) == 0xFF )
        {
          v38 = *((_QWORD *)&v27[0] + 1);
          v28[0] = v31;
          v28[1] = v30;
          *(_QWORD *)&v34 = v28;
          *((_QWORD *)&v34 + 1) = sub_1416CE600;
          *(_QWORD *)&v35 = &v32;
          *((_QWORD *)&v35 + 1) = sub_1416EBAE0;
          v36 = &v38;
          v37 = sub_14166FAD0;
          sub_1416DAFA0(&v25, &unk_141A3ABBF, &v34);
          v34 = v25;
          *(_QWORD *)&v35 = v26;
          sub_140032F30(&v38);
          v23 = v34;
          v24 = v41;
          *(_OWORD *)(v41 + 3) = v35;
          *(_OWORD *)(v24 + 1) = v23;
          *v24 = 9;
          v18 = (void (__fastcall **)(__int64))v43;
          v19 = v39;
          if ( !v39 )
          {
LABEL_30:
            if ( *v18 )
              (*v18)(v42);
            goto LABEL_36;
          }
LABEL_29:
          sub_140001660(v40, v19, 1);
          goto LABEL_30;
        }
        v29[0] = v27[0];
        v29[1] = v27[1];
        v13 = sub_1416724D0(aType_6, 4, v29);
        if ( v13
          && *(_BYTE *)v13 == 3
          && *(_QWORD *)(v13 + 24) == 13
          && !(**(_QWORD **)(v13 + 16) ^ 0x65736E6F70736572LL
             | *(_QWORD *)(*(_QWORD *)(v13 + 16) + 5LL) ^ 0x6D6574695F65736ELL) )
        {
          v14 = sub_14166BC00(v29, aPayloadType, 13);
          if ( v14 && *(_BYTE *)v14 == 3 )
          {
            v15 = *(_QWORD *)(v14 + 16);
            v11 = *(_QWORD *)(v14 + 24);
          }
          else
          {
            v15 = 0;
          }
          v16 = sub_14166BC00(v29, aPayloadId, 11);
          if ( v16 )
          {
            if ( v15 )
            {
              if ( *(_BYTE *)v16 == 3 )
              {
                sub_14073F750((unsigned int)&v34, v15, v11, *(_QWORD *)(v16 + 16), *(_QWORD *)(v16 + 24));
                if ( (_QWORD)v34 != -1 )
                {
                  if ( (_QWORD)v34 )
                    sub_140001660(*((_QWORD *)&v34 + 1), v34, 1);
                  ++v33;
                }
              }
            }
          }
        }
        sub_1406C0ED0(v29);
      }
    }
    v20 = v41;
    v41[1] = v33;
    *v20 = -1;
    if ( v39 )
      sub_140001660(v40, v39, 1);
    if ( *(_QWORD *)v43 )
      (*(void (__fastcall **)(__int64))v43)(v42);
LABEL_36:
    v21 = *(_QWORD *)(v43 + 8);
    if ( v21 )
      sub_140001660(v42, v21, *(_QWORD *)(v43 + 16));
  }
  else
  {
    *a1 = 2;
    a1[1] = v7;
  }
  return v41;
}
