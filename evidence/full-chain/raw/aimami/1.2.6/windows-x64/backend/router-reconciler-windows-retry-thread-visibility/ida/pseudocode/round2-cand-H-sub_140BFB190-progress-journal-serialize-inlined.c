/* round2 (2026-08-07) 证据 -- RouterToggleProgress::serialize 相关目标
 * 0x140BFB190 (1835B, 完整反编译体, 无 IDA 截断标记, ida_hexrays.decompile 原样落盘)
 * 通用 progress-journal 持久化函数，内含 RouterToggleProgress DTO 的完整字段
 * 序列化逻辑(非独立 ::serialize 符号)。详见 manifest.json functions[].resolution_round2。
 *
 * 关键证据摘要（正文见下方完整反编译体）：
 * - `*v29 = 123` 即写入 ASCII '{' 开始 JSON 对象
 * - 依次调用 sub_140417A30/sub_140416750/sub_1404143B0/sub_140418900(x2)/sub_140412260，
 *   每次传入共享字符串块 "targetphasestartedAtMsupdatedAtMsreasonoccurredAtMs" 的
 *   子串偏移+长度(target=6/phase=5/startedAtMs=11/updatedAtMs=11/reason=6)
 * - 与 0x140BA0B20/0x140BA0D80(反向 deserialize 字段匹配器)共用同一字段名表
 * - 最终经 sub_141543AF0(与 reconcile_router_on 内复用的同一 struct/map 序列化 helper) 完成构造
 * - 被 3 个 18-20KB 多命令异步分发器(sub_1409658F0/sub_14096C8D0/sub_140972CA0) 共调用 13 次以上
 */

_QWORD *__fastcall sub_140BFB190(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r15
  unsigned __int64 v20; // rbx
  __int64 v21; // r15
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 v28; // rax
  _BYTE *v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rdi
  __int128 *v34; // rdi
  const char *v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // [rsp+20h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-40h]
  __int64 v47; // [rsp+48h] [rbp-38h] BYREF
  __int64 v48; // [rsp+50h] [rbp-30h]
  __int64 v49; // [rsp+58h] [rbp-28h]
  __int64 v50; // [rsp+60h] [rbp-20h] BYREF
  __int64 v51; // [rsp+68h] [rbp-18h]
  __int64 v52; // [rsp+70h] [rbp-10h]
  unsigned __int64 v53; // [rsp+78h] [rbp-8h] BYREF
  unsigned __int64 v54; // [rsp+80h] [rbp+0h] BYREF
  char v55; // [rsp+88h] [rbp+8h] BYREF
  char v56[7]; // [rsp+89h] [rbp+9h] BYREF
  __int128 *v57; // [rsp+90h] [rbp+10h] BYREF
  const char *v58; // [rsp+98h] [rbp+18h]
  __int64 v59; // [rsp+A0h] [rbp+20h]
  __int64 v60; // [rsp+A8h] [rbp+28h]
  char v61; // [rsp+B0h] [rbp+30h]
  const char *v62; // [rsp+B8h] [rbp+38h]
  __int128 v63; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v64; // [rsp+D0h] [rbp+50h]
  __int64 v65; // [rsp+E0h] [rbp+60h]
  __int128 v66; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v67; // [rsp+F8h] [rbp+78h]
  _QWORD *v68; // [rsp+100h] [rbp+80h]
  __int64 v69; // [rsp+108h] [rbp+88h]
  __int64 v70; // [rsp+110h] [rbp+90h]
  __int64 v71; // [rsp+118h] [rbp+98h]
  __int128 v72; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v73; // [rsp+130h] [rbp+B0h]

  v73 = -2;
  v71 = a4;
  sub_14109ED10(&v47);
  v10 = ((int)v47 >> 13) - 1;
  v11 = 0;
  if ( (int)v47 >> 13 <= 0 )
  {
    v12 = (1 - ((int)v47 >> 13)) / 0x190u + 1;
    v10 += 400 * v12;
    v11 = -146097 * v12;
  }
  v13 = 1000
      * (HIDWORD(v47)
       + 86400LL
       * (int)(((v10 / 100) >> 2) + ((1461 * v10) >> 2) + v11 + (((unsigned int)v47 >> 4) & 0x1FF) - v10 / 100 - 719163))
      + (unsigned int)v48 / 0xF4240uLL;
  sub_140BFAC70(&v47, a2);
  v17 = v47;
  if ( v47 != -1 )
  {
    v14 = v48;
    v18 = v50;
    v19 = v51;
    if ( v55 == (_BYTE)a3 )
    {
      v20 = v53;
      if ( v47 )
        sub_140001660(v48, v47, 1);
      if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v19, v18, 1);
      v21 = a5;
      v22 = a5 == 0;
      if ( a5 < 0 )
        goto LABEL_10;
      goto LABEL_17;
    }
    if ( v47 )
      sub_140001660(v48, v47, 1);
    if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v19, v18, 1);
  }
  v20 = v13;
  v21 = a5;
  v22 = a5 == 0;
  if ( a5 < 0 )
  {
LABEL_10:
    v23 = 0;
    goto LABEL_11;
  }
LABEL_17:
  v68 = (_QWORD *)a1;
  if ( v22 )
  {
    v65 = 1;
    v25 = a7;
    v26 = a6;
    if ( a6 )
    {
LABEL_20:
      if ( v25 < 0 )
      {
        v27 = 0;
        goto LABEL_22;
      }
      if ( v25 )
      {
        nullsub_1(v14, v17, v15, v16, v45);
        v27 = 1;
        v28 = sub_140001650(v25, 1);
        if ( !v28 )
LABEL_22:
          sub_14176E54B(v27, v25);
        a1 = v28;
        v26 = a6;
        sub_14172B820(v28, a6, v25);
      }
      else
      {
        a1 = 1;
        v25 = 0;
      }
      goto LABEL_29;
    }
  }
  else
  {
    nullsub_1(v14, v17, v15, v16, v45);
    v23 = 1;
    v24 = sub_140001650(v21, 1);
    if ( !v24 )
LABEL_11:
      sub_14176E54B(v23, v21);
    v65 = v24;
    sub_14172B820(v24, v71, v21);
    v25 = a7;
    v26 = a6;
    if ( a6 )
      goto LABEL_20;
  }
  v25 = -1;
LABEL_29:
  v56[0] = 1;
  v55 = a3;
  v47 = a5;
  v48 = v65;
  v49 = a5;
  v53 = v20;
  v54 = v13;
  v50 = v25;
  v51 = a1;
  v46 = v25;
  v52 = v25;
  nullsub_1(v65, v17, v15, v16, v45);
  v29 = (_BYTE *)sub_140001650(128, 1);
  if ( !v29 )
    sub_14176E54B(1, 128);
  v30 = a1;
  *(_QWORD *)&v66 = 128;
  *((_QWORD *)&v66 + 1) = v29;
  v57 = &v66;
  v58 = asc_141866E68;
  v59 = 2;
  v60 = 1;
  v61 = 0;
  *v29 = 123;                                       /* '{' -- JSON 对象起始 */
  v67 = 1;
  LOWORD(v72) = 256;
  *((_QWORD *)&v72 + 1) = &v57;
  v31 = sub_140417A30(&v72, &qword_14186816F, 13, v56);
  v32 = v68;
  v33 = v31;
  if ( v31 )
    goto LABEL_34;
  if ( (_BYTE)v72 )
    goto LABEL_32;
  v33 = sub_140416750(&v72, "targetphasestartedAtMsupdatedAtMsreasonoccurredAtMs", 6, &v55);   /* 字段: target */
  if ( v33 )
    goto LABEL_34;
  if ( (_BYTE)v72 )
    goto LABEL_32;
  v33 = sub_1404143B0(&v72, "phasestartedAtMsupdatedAtMsreasonoccurredAtMs", 5, &v47);          /* 字段: phase */
  if ( v33 )
    goto LABEL_34;
  if ( (_BYTE)v72 )
    goto LABEL_32;
  v33 = sub_140418900(&v72, "startedAtMsupdatedAtMsreasonoccurredAtMs", 11, &v53);              /* 字段: startedAtMs */
  if ( v33 )
    goto LABEL_34;
  if ( (_BYTE)v72 )
    goto LABEL_32;
  v33 = sub_140418900(&v72, "updatedAtMsreasonoccurredAtMs", 11, &v54);                          /* 字段: updatedAtMs */
  if ( v33 )
    goto LABEL_34;
  if ( (_BYTE)v72 )
  {
LABEL_32:
    v33 = sub_14176A8E0();
    goto LABEL_34;
  }
  v33 = sub_140412260(&v72, "reasonoccurredAtMs", 6, &v50);                                       /* 字段: reason (occurredAtMs 随后经 v13/v20 时间戳值一并构造) */
  if ( v33 )
  {
LABEL_34:
    if ( (_QWORD)v66 )
      sub_140001660(*((_QWORD *)&v66 + 1), v66, 1);
    goto LABEL_36;
  }
  v63 = v72;
  sub_140506360(&v63);
  v69 = *((_QWORD *)&v66 + 1);
  v70 = v66;
  if ( (_QWORD)v66 == -1 )
  {
    v32 = v68;
    v33 = v69;
LABEL_36:
    *(_QWORD *)&v63 = v33;
    *(_QWORD *)&v66 = &v63;
    *((_QWORD *)&v66 + 1) = sub_1414D7A50;
    sub_141543AF0(&v57, &unk_141869E83, &v66);
    v34 = v57;
    v35 = v58;
    v36 = v59;
    v37 = *(_QWORD *)v63;
    v22 = *(_QWORD *)v63 == 1;
    v71 = v63;
    if ( v22 )
    {
      sub_1400478E0(v63 + 8);
    }
    else if ( !v37 )
    {
      v38 = *(_QWORD *)(v71 + 16);
      if ( v38 )
        sub_140001660(*(_QWORD *)(v71 + 8), v38, 1);
    }
    sub_140001660(v71, 40, 8);
    *v32 = 10;
    v32[1] = v34;
    v32[2] = v35;
    v32[3] = v36;
    goto LABEL_42;
  }
  v40 = v67;
  v41 = *(_QWORD *)(a2 + 776);
  v42 = *(_QWORD *)(a2 + 784);
  sub_14151B4E0((unsigned int)&v57, v41, v42, (unsigned int)aRouterTransiti, 30);   /* "router-transition-journal.json"/"router-events.jsonl" */
  v62 = v58;
  v43 = sub_140A6DB10(v58, v59, v69, v40);
  if ( v43 )
  {
    *(_QWORD *)&v72 = v43;
    *(_QWORD *)&v63 = &v72;
    *((_QWORD *)&v63 + 1) = sub_1415380C0;
    sub_141543AF0(&v66, &unk_141869EB2, &v63);
    v63 = v66;
    v64 = v67;
    sub_1400478E0(&v72);
    v44 = v68;
    v68[3] = v64;
    *(_OWORD *)(v44 + 1) = v63;
    *v44 = 10;
    if ( v57 )
      sub_140001660(v62, v57, 1);
    v32 = v68;
    if ( !v70 )
      goto LABEL_42;
LABEL_65:
    sub_140001660(v69, v70, 1);
    goto LABEL_42;
  }
  if ( v57 )
    sub_140001660(v62, v57, 1);
  sub_140BF9550(v41, v42, a3, v71, a5, v26, a7);
  v32 = v68;
  *v68 = -1;
  if ( v70 )
    goto LABEL_65;
LABEL_42:
  if ( a5 )
    sub_140001660(v65, a5, 1);
  if ( v46 > 0 )
    sub_140001660(v30, v46, 1);
  return v32;
}
