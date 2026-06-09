use crate::application::ports::{AppProcessPort, ForceKillOutcome, ForceKillProcess};
use crate::core::error::CoreError;
use std::thread;
use std::time::Duration;

#[cfg(target_os = "windows")]
pub fn background_command(program: &str) -> std::process::Command {
    use std::os::windows::process::CommandExt;
    const CREATE_NO_WINDOW: u32 = 0x08000000;

    let mut command = std::process::Command::new(program);
    command.creation_flags(CREATE_NO_WINDOW);
    command
}

#[cfg(not(target_os = "windows"))]
pub fn background_command(program: &str) -> std::process::Command {
    std::process::Command::new(program)
}

// 进程平台适配器只封装外部进程能力，不解释业务状态。
pub fn spawn_background_command(program: &str, args: &[&str]) -> Result<(), CoreError> {
    background_command(program).args(args).spawn()?;
    Ok(())
}

pub fn background_command_output(
    program: &str,
    args: &[&str],
) -> Result<std::process::Output, CoreError> {
    Ok(background_command(program).args(args).output()?)
}

pub(crate) struct ProcessPlatformAdapter;

impl AppProcessPort for ProcessPlatformAdapter {
    fn graceful_restart_for_update(&self) -> Result<(), CoreError> {
        graceful_restart_for_update()
    }

    fn restart_app(&self) -> Result<(), CoreError> {
        restart_app()
    }

    fn force_kill_app(&self) -> Result<ForceKillOutcome, CoreError> {
        force_kill_app()
    }
}

pub fn graceful_restart_for_update() -> Result<(), CoreError> {
    Err(CoreError::Unsupported(
        "当前公开后端未恢复更新重启动作".to_string(),
    ))
}

pub fn restart_app() -> Result<(), CoreError> {
    Err(CoreError::Unsupported(
        "当前公开后端未恢复重启外部程序能力".to_string(),
    ))
}

pub fn force_kill_app() -> Result<ForceKillOutcome, CoreError> {
    force_kill_codex_processes()
}

fn force_kill_codex_processes() -> Result<ForceKillOutcome, CoreError> {
    let first_pass = list_codex_processes()?;
    for process in &first_pass {
        force_kill_pid(process.pid)?;
    }

    thread::sleep(Duration::from_millis(500));
    let survivors = list_codex_processes()?;
    for process in &survivors {
        force_kill_pid(process.pid)?;
    }

    thread::sleep(Duration::from_millis(1000));
    let remaining = list_codex_processes()?;
    if !remaining.is_empty() {
        let names = remaining
            .iter()
            .map(format_process_label)
            .collect::<Vec<_>>()
            .join(", ");
        return Err(CoreError::Operation(format!(
            "CODEX_APP_QUIT_TIMEOUT: {names}"
        )));
    }

    let mut killed = first_pass;
    for process in survivors {
        if !killed.iter().any(|item| item.pid == process.pid) {
            killed.push(process);
        }
    }
    Ok(ForceKillOutcome {
        killed_count: killed.len() as i32,
        processes: killed,
    })
}

fn list_codex_processes() -> Result<Vec<ForceKillProcess>, CoreError> {
    let current_pid = std::process::id();
    Ok(list_processes()?
        .into_iter()
        .filter(|process| process.pid != current_pid)
        .filter(|process| is_codex_process(&process.name))
        .collect::<Vec<_>>())
}

#[cfg(target_os = "windows")]
fn list_processes() -> Result<Vec<ForceKillProcess>, CoreError> {
    let output = background_command_output("tasklist", &["/FO", "CSV", "/NH"])?;
    if !output.status.success() {
        return Err(CoreError::Operation(format!(
            "tasklist failed: {}",
            output.status
        )));
    }
    let stdout = String::from_utf8_lossy(&output.stdout);
    Ok(stdout
        .lines()
        .filter_map(parse_tasklist_csv_line)
        .collect::<Vec<_>>())
}

#[cfg(not(target_os = "windows"))]
fn list_processes() -> Result<Vec<ForceKillProcess>, CoreError> {
    let output = background_command_output("ps", &["-ax", "-o", "pid=,command="])?;
    if !output.status.success() {
        return Err(CoreError::Operation(format!(
            "ps failed: {}",
            output.status
        )));
    }
    let stdout = String::from_utf8_lossy(&output.stdout);
    Ok(stdout.lines().filter_map(parse_ps_line).collect::<Vec<_>>())
}

#[cfg(target_os = "windows")]
fn force_kill_pid(pid: u32) -> Result<(), CoreError> {
    let pid_arg = pid.to_string();
    let output = background_command_output("taskkill", &["/F", "/PID", &pid_arg])?;
    if output.status.success() {
        Ok(())
    } else {
        Err(CoreError::Operation(format!(
            "taskkill Codex failed: {}",
            output.status
        )))
    }
}

#[cfg(not(target_os = "windows"))]
fn force_kill_pid(pid: u32) -> Result<(), CoreError> {
    let pid_arg = pid.to_string();
    let output = background_command_output("kill", &["-9", &pid_arg])?;
    if output.status.success() {
        Ok(())
    } else {
        Err(CoreError::Operation(format!(
            "kill Codex failed: {}",
            output.status
        )))
    }
}

fn is_codex_process(name: &str) -> bool {
    let value = name.to_ascii_lowercase();
    let executable = value
        .rsplit(['/', '\\'])
        .next()
        .unwrap_or(value.as_str())
        .trim_matches('"');
    is_codex_process_name(&value, executable)
}

#[cfg(target_os = "windows")]
fn is_codex_process_name(_value: &str, executable: &str) -> bool {
    executable == "codex.exe" || executable.starts_with("codex")
}

#[cfg(not(target_os = "windows"))]
fn is_codex_process_name(value: &str, executable: &str) -> bool {
    executable == "codex.exe"
        || executable == "codex"
        || value.contains("codex.app")
        || value.contains("aimami.app")
        || value.contains("codex helper")
        || value.contains("/.cursor/extensions/")
        || value.contains("//cursor.app/")
        || value.contains("node_repl")
}

#[cfg(target_os = "windows")]
fn parse_tasklist_csv_line(line: &str) -> Option<ForceKillProcess> {
    let fields = parse_csv_fields(line);
    let name = fields.first()?.to_string();
    let pid = fields.get(1)?.parse::<u32>().ok()?;
    Some(ForceKillProcess { pid, name })
}

#[cfg(target_os = "windows")]
fn parse_csv_fields(line: &str) -> Vec<String> {
    let mut fields = Vec::new();
    let mut field = String::new();
    let mut in_quotes = false;
    let mut chars = line.chars().peekable();
    while let Some(ch) = chars.next() {
        match ch {
            '"' if in_quotes && chars.peek() == Some(&'"') => {
                field.push('"');
                let _ = chars.next();
            }
            '"' => in_quotes = !in_quotes,
            ',' if !in_quotes => {
                fields.push(field.trim().to_string());
                field.clear();
            }
            _ => field.push(ch),
        }
    }
    fields.push(field.trim().to_string());
    fields
}

#[cfg(not(target_os = "windows"))]
fn parse_ps_line(line: &str) -> Option<ForceKillProcess> {
    let trimmed = line.trim();
    let split_at = trimmed.find(char::is_whitespace)?;
    let (pid, command) = trimmed.split_at(split_at);
    let pid = pid.trim().parse::<u32>().ok()?;
    let name = command.trim().to_string();
    (!name.is_empty()).then_some(ForceKillProcess { pid, name })
}

fn format_process_label(process: &ForceKillProcess) -> String {
    format!("{} ({})", process.name, process.pid)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn codex_process_matcher_accepts_expected_names() {
        assert!(is_codex_process("Codex.exe"));
    }

    #[cfg(target_os = "windows")]
    #[test]
    fn windows_matcher_accepts_codex_prefix_names() {
        assert!(is_codex_process("codex-updater.exe"));
    }

    #[cfg(not(target_os = "windows"))]
    #[test]
    fn codex_process_matcher_accepts_macos_filters() {
        assert!(is_codex_process(
            "/Applications/Codex.app/Contents/MacOS/Codex"
        ));
        assert!(is_codex_process(
            "/Applications/AiMaMi.app/Contents/MacOS/AiMaMi"
        ));
        assert!(is_codex_process("Codex Helper"));
        assert!(is_codex_process("/tmp/node_repl/server.js"));
    }

    #[test]
    fn codex_process_matcher_rejects_unrelated_names() {
        assert!(!is_codex_process("OpenAiMami.exe"));
        assert!(!is_codex_process("code.exe"));
        assert!(!is_codex_process("not-codex-helper"));
    }

    #[cfg(target_os = "windows")]
    #[test]
    fn windows_matcher_rejects_macos_only_filters() {
        assert!(!is_codex_process("/tmp/node_repl/server.js"));
        assert!(!is_codex_process("/.cursor/extensions/example"));
    }

    #[cfg(not(target_os = "windows"))]
    #[test]
    fn parses_ps_lines() {
        let process =
            parse_ps_line("  123 /Applications/Codex.app/Contents/MacOS/Codex").expect("process");
        assert_eq!(process.pid, 123);
        assert_eq!(process.name, "/Applications/Codex.app/Contents/MacOS/Codex");
    }

    #[cfg(target_os = "windows")]
    #[test]
    fn parses_tasklist_csv_lines() {
        let process =
            parse_tasklist_csv_line("\"Codex.exe\",\"123\",\"Console\"").expect("process");
        assert_eq!(process.pid, 123);
        assert_eq!(process.name, "Codex.exe");
    }
}
