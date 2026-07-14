// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND breaker_select_candidates node 0x1006e9420 depth=1
__int64 __fastcall core::slice::sort::shared::smallsort::insertion_sort_shift_left::he504178d0cbc8924(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 *v4; // rsi
  __int64 v5; // r12
  __int64 *v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  int v9; // r14d
  bool v10; // cl
  bool v11; // cl
  _BYTE v12[224]; // [rsp-128h] [rbp-128h] BYREF
  __int64 v13; // [rsp-48h] [rbp-48h]
  __int64 *v14; // [rsp-40h] [rbp-40h]
  unsigned int v15; // [rsp-34h] [rbp-34h]

  result = a3 - 1; /*0x1006e9420*/
  if ( a3 - 1 >= a2 ) /*0x1006e9427*/
    BUG(); /*0x1006e9575*/
  if ( a3 != a2 ) /*0x1006e9430*/
  {
    v4 = (__int64 *)(a1 + 240 * a2); /*0x1006e9454*/
    v5 = 240 * a3; /*0x1006e9457*/
    v6 = (__int64 *)(a1 + 240 * a3); /*0x1006e945e*/
    v14 = v4; /*0x1006e9462*/
    do /*0x1006e94b9*/
    {
      v8 = *v6; /*0x1006e94bf*/
      v9 = *((_DWORD *)v6 + 58); /*0x1006e94c3*/
      result = *v6 < (unsigned __int64)*(v6 - 30); /*0x1006e94d3*/
      v10 = *((_DWORD *)v6 - 2) < v9; /*0x1006e94dc*/
      if ( *((_DWORD *)v6 - 2) == v9 ) /*0x1006e94df*/
        v10 = *v6 < (unsigned __int64)*(v6 - 30); /*0x1006e94df*/
      if ( v10 ) /*0x1006e94e5*/
      {
        memcpy(v12, v6 + 1, sizeof(v12)); /*0x1006e94f7*/
        v15 = *((_DWORD *)v6 + 59); /*0x1006e9503*/
        v13 = v5; /*0x1006e9506*/
        do /*0x1006e9559*/
        {
          memcpy((void *)(a1 + v5), (const void *)(a1 + v5 - 240), 0xF0u); /*0x1006e9521*/
          if ( v5 == 240 ) /*0x1006e952d*/
          {
            v7 = a1; /*0x1006e9470*/
            goto LABEL_5; /*0x1006e9470*/
          }
          v11 = *(_DWORD *)(a1 + v5 - 248) < v9; /*0x1006e954a*/
          if ( *(_DWORD *)(a1 + v5 - 248) == v9 ) /*0x1006e954d*/
            v11 = v8 < *(_QWORD *)(a1 + v5 - 480); /*0x1006e954d*/
          v5 -= 240; /*0x1006e9550*/
        }
        while ( v11 ); /*0x1006e9559*/
        v7 = a1 + v5; /*0x1006e955b*/
LABEL_5:
        *(_QWORD *)v7 = v8; /*0x1006e9473*/
        memcpy((void *)(v7 + 8), v12, 0xE0u); /*0x1006e9488*/
        *(_DWORD *)(v7 + 232) = v9; /*0x1006e948d*/
        result = v15; /*0x1006e9495*/
        *(_DWORD *)(v7 + 236) = v15; /*0x1006e9498*/
        v4 = v14; /*0x1006e94a0*/
        v5 = v13; /*0x1006e94a4*/
      }
      v6 += 30; /*0x1006e94a8*/
      v5 += 240; /*0x1006e94af*/
    }
    while ( v6 != v4 ); /*0x1006e94b9*/
  }
  return result; /*0x1006e9574*/
}