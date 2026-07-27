// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140785d10
// name: check_takeover_backup_orphan
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::check_takeover_backup_orphan | 跨平台字符串签名匹配(名↔函数一致)
_OWORD *__fastcall check_takeover_backup_orphan(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  _OWORD *result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  _OWORD *v13; // rax
  __int64 v14; // rcx
  _OWORD *v15; // r14

  if ( !(unsigned __int8)sub_1404105D0(a2) )
    return (_OWORD *)sub_140797030(a1, (unsigned int)aTakeoverBackup, 22, (unsigned int)&unk_14178E472, 25);
  if ( (a3 & 1) != 0 )
    return (_OWORD *)sub_140797030(a1, (unsigned int)aTakeoverBackup, 22, (unsigned int)&unk_14178E516, 51);
  nullsub_1(v5);
  v7 = sub_140001650(22, 1);
  if ( !v7 )
    sub_1416C2D4B(1, 22);
  v9 = v7;
  *(_OWORD *)v7 = *(_OWORD *)aTakeoverBackup;
  *(_QWORD *)(v7 + 14) = 0x6E616870726F5F70LL;
  nullsub_1(v8);
  v10 = (_DWORD *)sub_140001650(7, 1);
  if ( !v10 )
    sub_1416C2D4B(1, 7);
  v12 = v10;
  *(_DWORD *)((char *)v10 + 3) = 1735289198;
  *v10 = 1852989815;
  nullsub_1(v11);
  v13 = (_OWORD *)sub_140001650(43, 1);
  if ( !v13 )
    sub_1416C2D4B(1, 43);
  v15 = v13;
  *(_OWORD *)((char *)v13 + 27) = *(__int128 *)((char *)&xmmword_14178E49B + 11);
  v13[1] = xmmword_14178E49B;
  *v13 = xmmword_14178E48B;
  nullsub_1(v14);
  result = (_OWORD *)sub_140001650(96, 1);
  if ( !result )
    sub_1416C2D4B(1, 96);
  result[5] = xmmword_14178E506;
  result[4] = xmmword_14178E4F6;
  result[3] = xmmword_14178E4E6;
  result[2] = xmmword_14178E4D6;
  result[1] = xmmword_14178E4C6;
  *result = xmmword_14178E4B6;
  *(_QWORD *)a1 = 22;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = 22;
  *(_QWORD *)(a1 + 24) = 7;
  *(_QWORD *)(a1 + 32) = v12;
  *(_QWORD *)(a1 + 40) = 7;
  *(_QWORD *)(a1 + 48) = 43;
  *(_QWORD *)(a1 + 56) = v15;
  *(_QWORD *)(a1 + 64) = 43;
  *(_QWORD *)(a1 + 72) = 96;
  *(_QWORD *)(a1 + 80) = result;
  *(_QWORD *)(a1 + 88) = 96;
  *(_BYTE *)(a1 + 96) = 1;
  return result;
}