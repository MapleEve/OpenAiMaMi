// win 1.2.7 | module src/core/relay/proxy_access.rs | ea 0x1408e7cd0 | name sub_1408E7CD0
// win 1.2.7 | module src/core/relay/proxy_access.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1408E7CD0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  void (__fastcall *v4)(__int64); // rdx
  __int64 v5; // [rsp+20h] [rbp-20h]
  __int64 v6; // [rsp+20h] [rbp-20h]
  void (__fastcall **v8)(__int64); // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+30h] [rbp-10h]

  result = *(unsigned __int8 *)(a1 + 288);
  if ( !*(_BYTE *)(a1 + 288) )
  {
    v12 = *(_QWORD *)(a1 + 240);
    v6 = *(_QWORD *)(a1 + 248);
    if ( *(_QWORD *)v6 )
      (*(void (__fastcall **)(__int64))v6)(v12);
    v3 = *(_QWORD *)(v6 + 8);
    if ( v3 )
      sub_140001660(v12, v3, *(_QWORD *)(v6 + 16));
    sub_140407F80(a1);
    v11 = *(_QWORD *)(a1 + 224);
    v8 = *(void (__fastcall ***)(__int64))(a1 + 232);
    if ( !*v8 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( (_DWORD)result != 3 )
    return result;
  v10 = *(_QWORD *)(a1 + 272);
  v5 = *(_QWORD *)(a1 + 280);
  if ( *(_QWORD *)v5 )
    (*(void (__fastcall **)(__int64))v5)(v10);
  v2 = *(_QWORD *)(v5 + 8);
  if ( v2 )
    sub_140001660(v10, v2, *(_QWORD *)(v5 + 16));
  v11 = *(_QWORD *)(a1 + 256);
  v8 = *(void (__fastcall ***)(__int64))(a1 + 264);
  if ( *v8 )
LABEL_14:
    (*v8)(v11);
LABEL_15:
  result = (__int64)v8;
  v4 = v8[1];
  if ( v4 )
    return sub_140001660(v11, v4, v8[2]);
  return result;
}
