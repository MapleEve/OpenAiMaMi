// mac 1.1.8 behavioral restore_rollout_mtime_best_effort 0x10109b580 d=1
unsigned __int64 __fastcall std::fs::File::set_times::had0248e52bff5c3b(int *a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rsi
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v14; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v15[9]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-58h] BYREF
  _QWORD v17[10]; // [rsp+60h] [rbp-50h] BYREF

  v2 = *a2; /*0x10109b58c*/
  v3 = *((unsigned int *)a2 + 2); /*0x10109b58f*/
  v4 = a2[2]; /*0x10109b592*/
  v5 = *((unsigned int *)a2 + 6); /*0x10109b596*/
  v6 = a2[4]; /*0x10109b59a*/
  v7 = *((unsigned int *)a2 + 10); /*0x10109b59e*/
  v8 = *a1; /*0x10109b5a1*/
  v17[5] = 5; /*0x10109b5a3*/
  memset(&v17[6], 0, 24); /*0x10109b5bb*/
  if ( v7 != 1000000000 ) /*0x10109b5d0*/
  {
    v10 = &v17[1]; /*0x10109b5e3*/
    v16 = v6; /*0x10109b5e7*/
    v17[0] = v7; /*0x10109b5eb*/
    v17[8] = 1; /*0x10109b5ef*/
    HIDWORD(v17[5]) = 512; /*0x10109b5f7*/
    v9 = 1; /*0x10109b5fe*/
    if ( (_DWORD)v5 == 1000000000 ) /*0x10109b60a*/
      goto LABEL_6; /*0x10109b60a*/
    goto LABEL_5; /*0x10109b60a*/
  }
  v9 = 0; /*0x10109b5d2*/
  v10 = &v16; /*0x10109b5d4*/
  if ( (_DWORD)v5 != 1000000000 ) /*0x10109b5df*/
  {
LABEL_5:
    *v10 = v4; /*0x10109b60c*/
    v10[1] = v5; /*0x10109b60f*/
    v17[8] = ++v9; /*0x10109b616*/
    BYTE5(v17[5]) |= 4u; /*0x10109b61a*/
  }
LABEL_6:
  if ( (_DWORD)v3 != 1000000000 ) /*0x10109b624*/
  {
    v11 = (unsigned int)(16 * v9); /*0x10109b626*/
    *(_QWORD *)((char *)&v17[-1] + v11) = v2; /*0x10109b629*/
    *(_QWORD *)((char *)v17 + v11) = v3; /*0x10109b62e*/
    ++v17[8]; /*0x10109b633*/
    BYTE5(v17[5]) |= 0x10u; /*0x10109b637*/
  }
  qmemcpy(v15, v17, sizeof(v15)); /*0x10109b64f*/
  v14 = v16; /*0x10109b652*/
  v12 = 0; /*0x10109b66c*/
  if ( fsetattrlist(v8, &v15[5], &v14, 16LL * v15[8], 0) == -1 ) /*0x10109b67b*/
    return ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10109b688*/
  return v12; /*0x10109b68f*/
}