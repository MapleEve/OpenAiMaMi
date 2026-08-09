# full_reasoning_levels — Windows 侧本轮 NOT_FOUND（实现机制根本不同）

- mac 符号: `codexmate_lib::core::relay::codex_catalog::full_reasoning_levels::heb614757476bdf6a`
- mac EA: `0x100acfc30`, size 4666B, 75 basic blocks
- mac 行为: 通过 8 次 `BTreeMap::entry` 调用在**代码中构建** 4 个 reasoning 档位条目
  （low/medium/high/xhigh），每档 2 次（"effort"键+"description"键）。

## 已尝试的方法

对 codex_catalog 模块巨大候选函数 `0x1405622d0`(8907B, 316 basic blocks) 做完整
<工具调用> 反编译（39783字符，无截断），确认其内容为：**直接在 `.rdata` 段内嵌完整的
默认/bundled 目录 JSON 字面量文本**（通过 `find_regex` 在 `0x1418123d0` 确认
113506 字符 JSON 明文，含 `gpt-5.6-sol`/`gpt-5.6-terra`/`gpt-5.6-luna` 三变体
+ `low`/`medium`/`high`/`xhigh`/`max`/`ultra` 全部 6 档 reasoning level），
而非通过代码逐条构建。

## 结论

win 侧该处理逻辑是**"数据字面量"**（编译期内嵌 JSON 文本，运行时直接解析），
而 mac 侧是**"代码构造"**（运行时用 BTreeMap::entry 逐条 insert 构建结构体），
两者实现机制**根本不同**（这也解释了 changelog-item-4 "Windows 机型缺少 GPT-5.6
系列模型"的 bug 场景——win 侧依赖内嵌 JSON 字面量做本地兜底，而该内嵌数据本身
可能存在缺失/回退触发条件的 bug；mac 侧则通过代码构造，不存在同类"内嵌数据
过期/缺失"的风险面）。

未发现与 mac full_reasoning_levels（"通过代码构造 4 个档位条目"这一具体行为）
对应的独立函数。如实标注为 `NOT_FOUND_ARCHITECTURE_DIFFERS`，非"未找到"而是
"根本不存在对应的代码构造函数"。已在 win IDB 0x1405622d0 处写入说明注释。
