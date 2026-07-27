// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140fb1240
// name: sub_140FB1240
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140FB1240(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 i; // rsi
  __int64 v9; // rdi
  __int64 *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+28h] [rbp-18h]
  __int64 v19; // [rsp+28h] [rbp-18h]
  __int64 v20; // [rsp+30h] [rbp-10h]
  __int64 v21; // [rsp+30h] [rbp-10h]
  __int64 v22; // [rsp+30h] [rbp-10h]

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 520);
  if ( v2 )
  {
    v3 = (__int64 *)(*(_QWORD *)(v1 + 512) + 24LL);
    do
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)*v3) )
        sub_140FB11D0(v3);
      v3 += 5;
      --v2;
    }
    while ( v2 );
  }
  v4 = *(_QWORD *)(v1 + 504);
  if ( v4 )
    sub_140001660(*(_QWORD *)(v1 + 512), 40 * v4, 8);
  v5 = *(_QWORD *)(v1 + 472);
  if ( v5 )
    sub_140001660(*(_QWORD *)(v1 + 480), v5 << 7, 128);
  v6 = *(_QWORD **)(v1 + 136);
  v7 = *(_QWORD *)(v1 + 128) & 0xFFFFFFFFFFFFFFFEuLL;
  for ( i = *(_QWORD *)(v1 + 256) & 0xFFFFFFFFFFFFFFFEuLL; i != v7; v7 += 2LL )
  {
    if ( (~(_BYTE)v7 & 0x7E) == 0 )
    {
      v11 = (_QWORD *)*v6;
      sub_140001660(v6, 1520, 8);
      v6 = v11;
    }
  }
  sub_140001660(v6, 1520, 8);
  v9 = *(_QWORD *)(v1 + 408);
  if ( v9 )
  {
    v10 = *(__int64 **)(v1 + 400);
    do
    {
      if ( !_InterlockedDecrement64((volatile signed __int64 *)*v10) )
        sub_140FB11D0(v10);
      v10 += 4;
      --v9;
    }
    while ( v9 );
  }
  v12 = *(_QWORD *)(v1 + 392);
  if ( v12 )
    sub_140001660(*(_QWORD *)(v1 + 400), 32 * v12, 8);
  v17 = *(_QWORD *)(v1 + 416);
  if ( v17 )
  {
    v20 = *(_QWORD *)(v1 + 424);
    if ( *(_QWORD *)v20 )
      (*(void (__fastcall **)(__int64))v20)(v17);
    v13 = *(_QWORD *)(v20 + 8);
    if ( v13 )
      sub_140001660(v17, v13, *(_QWORD *)(v20 + 16));
  }
  v18 = *(_QWORD *)(v1 + 432);
  if ( v18 )
  {
    v21 = *(_QWORD *)(v1 + 440);
    if ( *(_QWORD *)v21 )
      (*(void (__fastcall **)(__int64))v21)(v18);
    v14 = *(_QWORD *)(v21 + 8);
    if ( v14 )
      sub_140001660(v18, v14, *(_QWORD *)(v21 + 16));
  }
  result = *(_QWORD *)(v1 + 448);
  v19 = result;
  if ( result )
  {
    v22 = *(_QWORD *)(v1 + 456);
    if ( *(_QWORD *)v22 )
      (*(void (__fastcall **)(__int64))v22)(result);
    result = v22;
    v16 = *(_QWORD *)(v22 + 8);
    if ( v16 )
      result = sub_140001660(v19, v16, *(_QWORD *)(v22 + 16));
  }
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) )
    return sub_140001660(v1, 640, 128);
  return result;
}