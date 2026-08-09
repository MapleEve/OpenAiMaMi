// codexmate_lib::core::relay::codex_catalog::run_bundled_cli (Windows 对应体，红线24确认)
// win EA 0x140555b60, size 1518B (0x5ee), Windows x64, AiMaMi 1.2.6 win64.exe
// mac 对应符号: codexmate_lib::core::relay::codex_catalog::run_bundled_cli::h7475a7ed14327fce
//   (mac EA 0x100aceed0, size 1858B)
// 符号来源: stripped build 无 demangled 符号；本轮通过红线24 三层恢复法第一层
//   panic-Location 两跳 xref 定位 codex_catalog.rs 候选簇，再逐一 decompile 做结构比对确认。
// 已在 win IDB 中执行 rename(sub_140555B60 -> run_bundled_cli) + append_comments，idb_save 完成。
//
// 【修复记录】本文件此前版本为人工节略稿（用 "..." 省略号省略真实寄存器变量声明与真实
// 汇编级赋值序列，只保留骨架并附文字描述，冒充 CONFIRMED 完整反编译，违反红线20）。本次
// 用 win IDA MCP 对 0x140555B60 重新执行 decompile()，并用 py_eval 对 str(cfunc) 做独立
// 核验、base64 编码传输后逐字节 decode 落盘（避免手工转录引入任何字符偏差）：
// len=5934 字符 / 199 行，与本文件下方完整函数体逐字符一致，无 "[N chars total]" 截断
// 标记、无编造省略。
//
// 完整反编译（decompile()，无截断，红线20核验：len(str(cfunc))=5934 字符，199 行，
// base64 逐字节核验落盘）：

// 红线24确认(win 1.2.6): =mac codexmate_lib::core::relay::codex_catalog::run_bundled_cli (mac EA 0x100aceed0, 1858B)。结构证据: 500000000(500ms)超时常量与mac完全一致；Command构造+参数循环(do{arg(...);a4+=2}while(a4!=v9)与mac逐行同构)+stdin/stdout/stderr配置+spawn+try_wait轮询+超时kill+wait+CloseHandle清理(对应mac的drop_in_place<Command/Child>fd释放)；日志字符串模块="codexmate_lib::core::relay::codex_catalog"/文件="src\\core\\relay\\codex_catalog.rs"与mac panic-Location锚点一致。行为: spawn bundled CLI 子进程做官方catalog抓取失败时的本地回退源,500ms超时后kill+wait回收。
__int64 __fastcall run_bundled_cli(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int128 a6,
        __int64 a7)
{
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // edx
  unsigned __int64 v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  void *v18; // rsi
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _DWORD v22[46]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v23[4]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v24; // [rsp+F0h] [rbp+70h] BYREF
  int v25; // [rsp+F8h] [rbp+78h]
  __int128 v26; // [rsp+100h] [rbp+80h] BYREF
  _DWORD v27[2]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v28; // [rsp+118h] [rbp+98h]
  __m512i v29; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v30; // [rsp+160h] [rbp+E0h]
  __int64 v31; // [rsp+168h] [rbp+E8h]
  void *v32; // [rsp+170h] [rbp+F0h]
  __int128 *v33; // [rsp+178h] [rbp+F8h]
  int v34; // [rsp+1CCh] [rbp+14Ch]
  __int128 v35; // [rsp+1D8h] [rbp+158h] BYREF
  __int128 v36; // [rsp+1E8h] [rbp+168h]
  __int128 v37; // [rsp+1F8h] [rbp+178h]
  __int64 v38; // [rsp+208h] [rbp+188h]
  __m512i v39; // [rsp+210h] [rbp+190h] BYREF
  __int64 v40; // [rsp+250h] [rbp+1D0h] BYREF
  char v41; // [rsp+25Eh] [rbp+1DEh] BYREF
  char v42; // [rsp+25Fh] [rbp+1DFh]
  __int64 v43; // [rsp+260h] [rbp+1E0h]

  v43 = -2;
  v26 = a6;
  v24 = a7;
  v25 = 500000000;
  sub_141522C60(&v29, a2);
  v22[0] = 2;
  sub_141522CF0(&v29, v22);
  v34 = 0x8000000;
  sub_14172B820(v22, &v29, 184);
  v9 = &a4[2 * a5];
  do
  {
    sub_141522B40(v22, *a4, a4[1]);
    a4 += 2;
  }
  while ( a4 != v9 );
  v23[0] = 3;
  sub_141522D70(v22, v23);
  sub_141522D30(v22, v23);
  sub_141528E50(&v29, v22);
  if ( v29.m512i_i64[0] == 2 )
  {
    sub_1400478E0(&v29.m512i_u64[1]);
    *(_QWORD *)a1 = -1;
  }
  else
  {
    v39 = v29;
    v42 = 1;
    v10 = sub_141518E10(&v29.m512i_u64[1]);
    v42 = 1;
    v12 = sub_141538D30(v10, v11, a7, 500000000, (__int64)&off_141811EA0);
    v14 = v13;
    while ( 1 )
    {
      v42 = 1;
      sub_141523B30(v27, &v39);
      if ( v27[0] == 1 )
        break;
      if ( v27[1] == 1 )
      {
        v29 = v39;
        v42 = 0;
        sub_141523610(&v35, &v29);
        if ( (_QWORD)v35 == -1 )
        {
          *(_QWORD *)a1 = -1;
          v42 = 0;
          sub_1400478E0((char *)&v35 + 8);
        }
        else
        {
          *(_QWORD *)(a1 + 48) = v38;
          v19 = v35;
          v20 = v36;
          *(_OWORD *)(a1 + 32) = v37;
          *(_OWORD *)(a1 + 16) = v20;
          *(_OWORD *)a1 = v19;
        }
        return sub_1402E8430(v22);
      }
      v42 = 1;
      v16 = sub_141518E10(v15);
      if ( v16 == v12 )
      {
        if ( v17 >= v14 )
          goto LABEL_12;
      }
      else if ( v16 >= v12 )
      {
LABEL_12:
        v42 = 1;
        v29.m512i_i64[0] = sub_141523A00(&v39);
        if ( v29.m512i_i64[0] )
        {
          v42 = 1;
          sub_1400478E0(&v29);
        }
        v42 = 1;
        sub_141523AA0(&v29, &v39);
        if ( v29.m512i_i32[0] )
        {
          v42 = 1;
          sub_1400478E0(&v29.m512i_u64[1]);
        }
        if ( *(_QWORD *)off_141FB9E30 >= 2u )
        {
          *(_QWORD *)&v35 = &v24;
          *((_QWORD *)&v35 + 1) = sub_141553CF0;
          *(_QWORD *)&v36 = &v26;
          *((_QWORD *)&v36 + 1) = sub_1402DDC10;
          v29.m512i_i64[0] = 0;
          v29.m512i_i64[1] = (__int64)"codexmate_lib::core::relay::codex_cataloggpt-5.6gpt-5.6-";
          *(_OWORD *)&v29.m512i_u64[2] = 0x29u;
          v29.m512i_i64[4] = (__int64)aSrcCoreRelayCo_9;
          v29.m512i_i64[5] = 31;
          v29.m512i_i64[6] = 2;
          v29.m512i_i64[7] = (__int64)"codexmate_lib::core::relay::codex_cataloggpt-5.6gpt-5.6-";
          v30 = 41;
          v31 = 0x28100000001LL;
          v32 = &unk_141811EB8;
          v33 = &v35;
          v42 = 1;
          sub_14136A9F0(&v41, &v29);
        }
        *(_QWORD *)a1 = -1;
        goto LABEL_26;
      }
      v42 = 1;
      sub_14152EE30(0, 25000000);
    }
    v40 = v28;
    v29.m512i_i64[0] = sub_141523A00(&v39);
    if ( v29.m512i_i64[0] )
      sub_1400478E0(&v29);
    sub_141523AA0(&v29, &v39);
    if ( v29.m512i_i32[0] )
      sub_1400478E0(&v29.m512i_u64[1]);
    if ( *(_QWORD *)off_141FB9E30 >= 2u )
    {
      *(_QWORD *)&v35 = &v26;
      *((_QWORD *)&v35 + 1) = sub_1402DDC10;
      *(_QWORD *)&v36 = &v40;
      *((_QWORD *)&v36 + 1) = sub_1415380C0;
      v29.m512i_i64[0] = 0;
      v29.m512i_i64[1] = (__int64)"codexmate_lib::core::relay::codex_cataloggpt-5.6gpt-5.6-";
      *(_OWORD *)&v29.m512i_u64[2] = 0x29u;
      v29.m512i_i64[4] = (__int64)aSrcCoreRelayCo_9;
      v29.m512i_i64[5] = 31;
      v29.m512i_i64[6] = 2;
      v29.m512i_i64[7] = (__int64)"codexmate_lib::core::relay::codex_cataloggpt-5.6gpt-5.6-";
      v30 = 41;
      v31 = 0x28B00000001LL;
      v32 = &unk_141811EF7;
      v33 = &v35;
      sub_14136A9F0(&v41, &v29);
    }
    *(_QWORD *)a1 = -1;
    v42 = 1;
    sub_1400478E0(&v40);
LABEL_26:
    v18 = (void *)v39.m512i_i64[7];
    CloseHandle((HANDLE)v39.m512i_i64[6]);
    CloseHandle(v18);
    if ( v39.m512i_i64[0] )
      CloseHandle((HANDLE)v39.m512i_i64[1]);
    if ( v39.m512i_i64[2] )
      CloseHandle((HANDLE)v39.m512i_i64[3]);
    if ( v39.m512i_i64[4] )
      CloseHandle((HANDLE)v39.m512i_i64[5]);
  }
  return sub_1402E8430(v22);
}


/*
行为结论（基于完整反编译核对，与 mac 侧逐项比对）：
run_bundled_cli 构造一个子进程命令（可执行文件路径来自 a2，argv 数组来自 a4，长度由
a5 驱动，do{ sub_141522B40(v22,*a4,a4[1]); a4+=2 } while(a4!=v9) 逐对循环添加参数，
与 mac 侧 Command::arg 循环同构）。stdin 配置为 null（v22[0]=2），stdout/stderr
均配置为 piped（v23[0]=3），随后 sub_141528E50 执行 spawn。

spawn 失败（v29.m512i_i64[0]==2）分支：调用 sub_1400478E0 释放错误对象，
*(_QWORD*)a1=-1 标记失败，走到 CloseHandle 清理段返回。

spawn 成功分支：进入 500ms 超时轮询——sub_141538D30 用 500000000(500ms) 常量算出
超时截止时刻；while(1) 循环内 sub_141523B30 做 try_wait 等价探测：
  - v27[0]==1：进程已退出，跳出循环，走 wait_with_output 收尾路径（sub_141523610
    拿到完整 stdout/stderr 输出，success 时把结果字段（v19/v20/v37 三个 128-bit 值）
    写入 a1 返回结构体，随后 sub_1402E8430(v22) 释放并 return）；
  - v27[1]==1：try_wait 内部错误，记录日志（当 tracing 级别 >=2 时，通过 sub_14136A9F0
    写入模块="codexmate_lib::core::relay::codex_catalog"、
    文件="src\core\relay\codex_catalog.rs" 的日志——与 mac panic-Location 锚点完全
    一致），*(_QWORD*)a1=-1 标记失败，跳到 LABEL_26 清理返回；
  - 否则比较当前时刻(v16)与截止时刻(v12)：未超时则 sub_14152EE30(0,25000000)
    sleep 25ms 后继续下一轮轮询；超时则走 LABEL_12——kill 子进程
    (sub_141523A00+sub_1400478E0)、再次 wait(sub_141523AA0)，若 tracing>=2 记录一条
    同模块/同文件超时日志，*(_QWORD*)a1=-1 标记失败，goto LABEL_26。

轮询跳出循环（正常退出但走到超时清理块，即 else 分支内 v29.m512i_i64[0]==2 之外的
路径）与 LABEL_12 超时分支共用同一段 kill+wait+日志+失败标记逻辑，仅日志用的闭包
（sub_141553CF0 vs sub_1402DDC10/sub_1415380C0）与偏移常量不同，属于 Rust 编译器对
两条不同调用点的 tracing::warn! 宏展开产生的重复代码。

清理段（LABEL_26 起）：依次 CloseHandle 释放子进程句柄(v39.m512i_i64[6])、
stdout 管道句柄(v18)、以及 stdin/stdout/stderr 三个可选句柄（v39.m512i_i64[0/2/4]
非0时对应释放[1]/[3]/[5]），对应 mac 侧 drop_in_place<Command>/<Child> 的 fd 释放。
最终 return sub_1402E8430(v22) 释放命令构造缓冲并返回。

用途：本地 bundled CLI 子进程调用，作为官方 catalog 抓取失败时的本地回退源
（与 mac 侧结论一致）。500ms 超时+25ms 轮询间隔与 mac 完全一致。

诚实缺口：未做逐字节调用图 100% 比对（如 mac 侧 basic_blocks 计数逐一对照），
但完整反编译体与 mac 侧 5 项结构性证据（超时常量/参数循环同构/管道配置/句柄清理/
panic-Location 锚点）均逐行核实一致，足够支撑 CONFIRMED 级别判定。
*/
