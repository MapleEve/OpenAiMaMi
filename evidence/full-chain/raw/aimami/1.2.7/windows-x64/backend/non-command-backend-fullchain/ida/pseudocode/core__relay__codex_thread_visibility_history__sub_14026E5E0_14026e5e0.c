// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x14026e5e0 | name sub_14026E5E0
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14026E5E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64, __int64 *); // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void (__fastcall **v15)(__int64); // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int128 v19; // xmm0
  __int128 v20; // [rsp+78h] [rbp-8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+8h]
  _OWORD v22[2]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v23[2]; // [rsp+B0h] [rbp+30h] BYREF
  _OWORD v24[2]; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+E0h] [rbp+60h]
  __int64 v26; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v27; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v28; // [rsp+100h] [rbp+80h]
  __int64 *v29; // [rsp+110h] [rbp+90h]
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // [rsp+118h] [rbp+98h]
  __int64 v31; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v32; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v33; // [rsp+130h] [rbp+B0h]
  __int64 v34; // [rsp+140h] [rbp+C0h]
  __int64 v35; // [rsp+148h] [rbp+C8h]
  __int64 v36; // [rsp+150h] [rbp+D0h]
  __int64 v37; // [rsp+158h] [rbp+D8h]

  v37 = -2;
  sub_140281F40(&v27, a2, a3);
  v7 = *((_QWORD *)&v27 + 1);
  v35 = v27;
  if ( (_QWORD)v27 )
  {
    v32 = 0;
    *(_QWORD *)&v33 = 1;
    v26 = 0;
    v36 = *((_QWORD *)&v27 + 1);
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*((_QWORD *)&v27 + 1) + 112LL);
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      *((_QWORD *)&v33 + 1) = 0;
      LOBYTE(v6) = 10;
      if ( v8(v35, v6, &v32) == 1 )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v11;
        v15 = (void (__fastcall **)(__int64))v36;
        v16 = v32;
        if ( !v32 )
          goto LABEL_26;
        goto LABEL_25;
      }
      if ( !v11 )
        break;
      v26 = ++v9;
      if ( (unsigned __int8)sub_14026D540(v33, *((_QWORD *)&v33 + 1)) )
      {
        v27 = v33;
        v28 = 0;
        sub_14062F970(v22, &v27);
        if ( LOBYTE(v22[0]) == 0xFF )
        {
          v31 = *((_QWORD *)&v22[0] + 1);
          v23[0] = a2;
          v23[1] = a3;
          *(_QWORD *)&v27 = v23;
          *((_QWORD *)&v27 + 1) = sub_14169F630;
          *(_QWORD *)&v28 = &v26;
          *((_QWORD *)&v28 + 1) = sub_1416BCB10;
          v29 = &v31;
          v30 = sub_14163CE40;
          sub_1416ABFD0(&v20, &unk_1419D7A26, &v27);
          v27 = v20;
          *(_QWORD *)&v28 = v21;
          sub_14002F910(&v31);
          v19 = v27;
          *(_OWORD *)(a1 + 24) = v28;
          *(_OWORD *)(a1 + 8) = v19;
          *(_QWORD *)a1 = 9;
          v15 = (void (__fastcall **)(__int64))v36;
          v16 = v32;
          if ( !v32 )
          {
LABEL_26:
            if ( *v15 )
              (*v15)(v35);
            goto LABEL_32;
          }
LABEL_25:
          sub_140001660(v33, v16, 1);
          goto LABEL_26;
        }
        v24[0] = v22[0];
        v24[1] = v22[1];
        v12 = sub_1416419F0(aType_3, 4, v24);
        if ( v12
          && *(_BYTE *)v12 == 3
          && *(_QWORD *)(v12 + 24) == 13
          && !(**(_QWORD **)(v12 + 16) ^ 0x65736E6F70736572LL
             | *(_QWORD *)(*(_QWORD *)(v12 + 16) + 5LL) ^ 0x6D6574695F65736ELL) )
        {
          v13 = sub_141642800(v24, aPayloadType, 13);
          if ( v13 && *(_BYTE *)v13 == 3 )
          {
            v34 = *(_QWORD *)(v13 + 16);
            v25 = *(_QWORD *)(v13 + 24);
          }
          else
          {
            v34 = 0;
          }
          v14 = sub_141642800(v24, aPayloadId, 11);
          if ( v14 )
          {
            if ( v34 )
            {
              if ( *(_BYTE *)v14 == 3 )
              {
                sub_14026D900((unsigned int)&v27, v34, v25, *(_QWORD *)(v14 + 16), *(_QWORD *)(v14 + 24));
                if ( (_QWORD)v27 != -1 )
                {
                  if ( (_QWORD)v27 )
                    sub_140001660(*((_QWORD *)&v27 + 1), v27, 1);
                  ++v10;
                }
              }
            }
          }
        }
        sub_14002F9D0(v24);
      }
    }
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = -1;
    if ( v32 )
      sub_140001660(v33, v32, 1);
    if ( *(_QWORD *)v36 )
      (*(void (__fastcall **)(__int64))v36)(v35);
LABEL_32:
    v17 = *(_QWORD *)(v36 + 8);
    if ( v17 )
      sub_140001660(v35, v17, *(_QWORD *)(v36 + 16));
  }
  else
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v7;
  }
  return a1;
}
