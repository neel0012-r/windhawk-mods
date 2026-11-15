// ==WindhawkMod==
// @id              edgeflow
// @name            EdgeFlow
// @description     Ultra-fast screen edge controls and hot corners for Volume, Brightness, App Switching, and more
// @version         1.0.0
// @author          Mayur Dev
// @github          https://github.com/neel0012-r
// @include         explorer.exe
// @architecture    x86-64
// @compilerOptions -ldxva2
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# EdgeFlow - Screen Edge Controls and Hot Corners

> ## NOTE: WORKS EVERYWHERE ACROSS WINDOWS EXCEPT INSIDE THE WINDHAWK APP WINDOW.
> (Windows security / UIPI blocks input simulation when an elevated admin window like Windhawk is focused. Works 100% on all browsers, documents, games, desktop, and other apps!)

Turn your screen borders and corners into instant shortcuts.

### Edge Controls
- 4 Screen Borders: Left, Right, Top, and Bottom.
- Actions: Scroll Up, Scroll Down, or Middle Click on any border.
- Zero Background Scrolling: Active windows (PDFs, browsers, editors) will not scroll accidentally.
- Hardware Brightness: Physical monitor brightness controls asynchronously without cursor lag.
- Fast App Switcher: Alt+Tab switching with safety cooldown.

### Hot Corners
- 4 Screen Corners: Top-Left, Top-Right, Bottom-Left, and Bottom-Right.
- Trigger Methods: Activate by Hover, Left Click, or Right Click.
- System Actions: Task View, Show Desktop, Task Manager, Start Menu, Screenshot, and more.
- Everything is disabled by default until you choose your preferred actions.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
# -------------------------------------------------------------
# EDGE CONTROLS
# -------------------------------------------------------------

- edge_thickness: 6
  $name: "Edge Controls - Border Thickness (px)"
  $description: "Distance from screen border to activate gestures (Default: 6px). Note: Works everywhere across Windows except inside the Windhawk app window."

- alttab_cooldown: 150
  $name: "Edge Controls - App Switcher Speed (ms)"
  $description: "Safety cooldown between rapid Alt+Tab switches so windows never get skipped. Default: 150ms."

- left_scroll_up: "none"
  $name: "Left Edge - Scroll Up"
  $description: "Action when scrolling up at the left border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - space: "Play / Pause (Spacebar)"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- left_scroll_down: "none"
  $name: "Left Edge - Scroll Down"
  $description: "Action when scrolling down at the left border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- left_mclick: "none"
  $name: "Left Edge - Middle Click"
  $description: "Action when middle clicking at the left border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - space: "Play / Pause (Spacebar)"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- right_scroll_up: "none"
  $name: "Right Edge - Scroll Up"
  $description: "Action when scrolling up at the right border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- right_scroll_down: "none"
  $name: "Right Edge - Scroll Down"
  $description: "Action when scrolling down at the right border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - vol_down: "Volume Down"
    - vol_up: "Volume Up"
    - vol_mute: "Mute / Unmute Sound"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- right_mclick: "none"
  $name: "Right Edge - Middle Click"
  $description: "Action when middle clicking at the right border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - vol_mute: "Mute / Unmute Sound"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - show_desktop: "Show Desktop"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- top_scroll_up: "none"
  $name: "Top Edge - Scroll Up"
  $description: "Action when scrolling up at the top border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- top_scroll_down: "none"
  $name: "Top Edge - Scroll Down"
  $description: "Action when scrolling down at the top border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - bright_down: "Brightness Down"
    - bright_up: "Brightness Up"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- top_mclick: "none"
  $name: "Top Edge - Middle Click"
  $description: "Action when middle clicking at the top border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- bottom_scroll_up: "none"
  $name: "Bottom Edge - Scroll Up"
  $description: "Action when scrolling up at the bottom border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - vdesktop_prev: "Previous Virtual Desktop"
    - vdesktop_next: "Next Virtual Desktop"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- bottom_scroll_down: "none"
  $name: "Bottom Edge - Scroll Down"
  $description: "Action when scrolling down at the bottom border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

- bottom_mclick: "none"
  $name: "Bottom Edge - Middle Click"
  $description: "Action when middle clicking at the bottom border of the screen."
  $options:
    - none: "Disabled (Do nothing)"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - vdesktop_next: "Next Virtual Desktop"
    - vdesktop_prev: "Previous Virtual Desktop"
    - vol_up: "Volume Up"
    - vol_down: "Volume Down"
    - vol_mute: "Mute / Unmute Sound"
    - alt_tab_next: "Switch to Next App (Alt + Tab)"
    - alt_tab_prev: "Switch to Previous App (Alt + Shift + Tab)"
    - space: "Play / Pause (Spacebar)"
    - bright_up: "Brightness Up"
    - bright_down: "Brightness Down"
    - media_play_pause: "Media Play / Pause"
    - media_next: "Next Song"
    - media_prev: "Previous Song"

# -------------------------------------------------------------
# HOT CORNERS
# -------------------------------------------------------------

- corner_size: 10
  $name: "Hot Corners - Corner Area Size (px)"
  $description: "Size of the active corner zone in pixels. Default: 10px."

- corner_hover_delay: 250
  $name: "Hot Corners - Hover Trigger Delay (ms)"
  $description: "Time cursor must rest in corner before activating. Default: 250ms."

- tl_trigger: "none"
  $name: "Top-Left Corner - Trigger Mode"
  $description: "How to activate this corner: Hover, Left Click, or Right Click."
  $options:
    - none: "Disabled (Do nothing)"
    - hover: "Hover (Rest cursor in corner)"
    - lclick: "Left Click in corner"
    - rclick: "Right Click in corner"

- tl_action: "none"
  $name: "Top-Left Corner - Action"
  $description: "Action executed when Top-Left corner is activated."
  $options:
    - none: "Disabled (Do nothing)"
    - task_view: "Task View"
    - show_desktop: "Show Desktop"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vol_mute: "Mute / Unmute Sound"
    - space: "Play / Pause (Spacebar)"

- tr_trigger: "none"
  $name: "Top-Right Corner - Trigger Mode"
  $description: "How to activate this corner: Hover, Left Click, or Right Click."
  $options:
    - none: "Disabled (Do nothing)"
    - hover: "Hover (Rest cursor in corner)"
    - lclick: "Left Click in corner"
    - rclick: "Right Click in corner"

- tr_action: "none"
  $name: "Top-Right Corner - Action"
  $description: "Action executed when Top-Right corner is activated."
  $options:
    - none: "Disabled (Do nothing)"
    - task_manager: "Open Task Manager"
    - task_view: "Task View"
    - show_desktop: "Show Desktop"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vol_mute: "Mute / Unmute Sound"
    - space: "Play / Pause (Spacebar)"

- bl_trigger: "none"
  $name: "Bottom-Left Corner - Trigger Mode"
  $description: "How to activate this corner: Hover, Left Click, or Right Click."
  $options:
    - none: "Disabled (Do nothing)"
    - hover: "Hover (Rest cursor in corner)"
    - lclick: "Left Click in corner"
    - rclick: "Right Click in corner"

- bl_action: "none"
  $name: "Bottom-Left Corner - Action"
  $description: "Action executed when Bottom-Left corner is activated."
  $options:
    - none: "Disabled (Do nothing)"
    - start_menu: "Open Start Menu"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vol_mute: "Mute / Unmute Sound"
    - space: "Play / Pause (Spacebar)"

- br_trigger: "none"
  $name: "Bottom-Right Corner - Trigger Mode"
  $description: "How to activate this corner: Hover, Left Click, or Right Click."
  $options:
    - none: "Disabled (Do nothing)"
    - hover: "Hover (Rest cursor in corner)"
    - lclick: "Left Click in corner"
    - rclick: "Right Click in corner"

- br_action: "none"
  $name: "Bottom-Right Corner - Action"
  $description: "Action executed when Bottom-Right corner is activated."
  $options:
    - none: "Disabled (Do nothing)"
    - show_desktop: "Show Desktop"
    - task_view: "Task View"
    - task_manager: "Open Task Manager"
    - start_menu: "Open Start Menu"
    - screen_snip: "Snipping Tool (Screenshot)"
    - action_center: "Action Center (Notifications)"
    - file_explorer: "Open File Explorer"
    - lock_pc: "Lock Screen"
    - vol_mute: "Mute / Unmute Sound"
    - space: "Play / Pause (Spacebar)"
*/
// ==/WindhawkModSettings==

#include <windows.h>
#include <vector>

// Dynamic DXVA2 types for Zero-Warning Brightness control
#ifndef _PHYSICAL_MONITOR_DEFINED
typedef struct _PHYSICAL_MONITOR {
    HANDLE hPhysicalMonitor;
    WCHAR szPhysicalMonitorDescription[128];
} PHYSICAL_MONITOR, *LPPHYSICAL_MONITOR;
#define _PHYSICAL_MONITOR_DEFINED
#endif

typedef BOOL (WINAPI *pfnGetNumberOfPhysicalMonitorsFromHMONITOR)(HMONITOR, LPDWORD);
typedef BOOL (WINAPI *pfnGetPhysicalMonitorsFromHMONITOR)(HMONITOR, DWORD, LPPHYSICAL_MONITOR);
typedef BOOL (WINAPI *pfnGetMonitorBrightness)(HANDLE, LPDWORD, LPDWORD, LPDWORD);
typedef BOOL (WINAPI *pfnSetMonitorBrightness)(HANDLE, DWORD);
typedef BOOL (WINAPI *pfnDestroyPhysicalMonitors)(DWORD, LPPHYSICAL_MONITOR);

HMODULE g_hDxva2 = NULL;
pfnGetNumberOfPhysicalMonitorsFromHMONITOR g_pGetNumberOfPhysicalMonitorsFromHMONITOR = NULL;
pfnGetPhysicalMonitorsFromHMONITOR g_pGetPhysicalMonitorsFromHMONITOR = NULL;
pfnGetMonitorBrightness g_pGetMonitorBrightness = NULL;
pfnSetMonitorBrightness g_pSetMonitorBrightness = NULL;
pfnDestroyPhysicalMonitors g_pDestroyPhysicalMonitors = NULL;

// Async Brightness Engine Globals
HANDLE g_hBrightnessEvent = NULL;
HANDLE g_hBrightnessThread = NULL;
DWORD g_brightnessThreadId = 0;
volatile LONG g_brightnessDelta = 0;
POINT g_brightnessPt = { 0, 0 };
volatile bool g_brightnessRunning = false;

// Action Enumeration
enum ActionType {
    ACTION_NONE = 0,
    ACTION_VOL_UP,
    ACTION_VOL_DOWN,
    ACTION_VOL_MUTE,
    ACTION_ALT_TAB_NEXT,
    ACTION_ALT_TAB_PREV,
    ACTION_SPACE,
    ACTION_BRIGHT_UP,
    ACTION_BRIGHT_DOWN,
    ACTION_VDESKTOP_NEXT,
    ACTION_VDESKTOP_PREV,
    ACTION_SHOW_DESKTOP,
    ACTION_TASK_VIEW,
    ACTION_TASK_MANAGER,
    ACTION_START_MENU,
    ACTION_SCREEN_SNIP,
    ACTION_ACTION_CENTER,
    ACTION_FILE_EXPLORER,
    ACTION_LOCK_PC,
    ACTION_MEDIA_PLAY_PAUSE,
    ACTION_MEDIA_NEXT,
    ACTION_MEDIA_PREV
};

enum EdgeLocation {
    EDGE_NONE = 0,
    EDGE_LEFT,
    EDGE_RIGHT,
    EDGE_TOP,
    EDGE_BOTTOM
};

enum CornerLocation {
    CORNER_NONE = 0,
    CORNER_TOP_LEFT,
    CORNER_TOP_RIGHT,
    CORNER_BOTTOM_LEFT,
    CORNER_BOTTOM_RIGHT
};

enum TriggerMode {
    TRIGGER_NONE = 0,
    TRIGGER_HOVER,
    TRIGGER_LCLICK,
    TRIGGER_RCLICK
};

struct EdgeConfig {
    ActionType scroll_up;
    ActionType scroll_down;
    ActionType mclick;
};

struct CornerConfig {
    TriggerMode trigger;
    ActionType action;
};

struct Settings {
    // Edge Controls
    int thickness;
    int alttab_cooldown;
    EdgeConfig left;
    EdgeConfig right;
    EdgeConfig top;
    EdgeConfig bottom;

    // Hot Corners
    int corner_size;
    int corner_hover_delay;
    CornerConfig tl;
    CornerConfig tr;
    CornerConfig bl;
    CornerConfig br;
} g_settings;

HHOOK g_mouseHook = NULL;
HANDLE g_hHookThread = NULL;
DWORD g_hookThreadId = 0;
HANDLE g_hHookReadyEvent = NULL;

// Corner Hover Tracking
CornerLocation g_activeHoverCorner = CORNER_NONE;
UINT_PTR g_cornerHoverTimerId = 0;
bool g_cornerHoverTriggered = false;

void TriggerAction(ActionType action, POINT pt);

CornerConfig* GetCornerConfig(CornerLocation corner) {
    if (corner == CORNER_TOP_LEFT) return &g_settings.tl;
    if (corner == CORNER_TOP_RIGHT) return &g_settings.tr;
    if (corner == CORNER_BOTTOM_LEFT) return &g_settings.bl;
    if (corner == CORNER_BOTTOM_RIGHT) return &g_settings.br;
    return nullptr;
}

VOID CALLBACK CornerHoverTimerProc(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime) {
    if (g_cornerHoverTimerId) {
        KillTimer(NULL, g_cornerHoverTimerId);
        g_cornerHoverTimerId = 0;
    }

    if (g_activeHoverCorner != CORNER_NONE && !g_cornerHoverTriggered) {
        CornerConfig* cfg = GetCornerConfig(g_activeHoverCorner);
        if (cfg && cfg->trigger == TRIGGER_HOVER && cfg->action != ACTION_NONE) {
            POINT pt;
            GetCursorPos(&pt);
            TriggerAction(cfg->action, pt);
            g_cornerHoverTriggered = true;
            Wh_Log(L"EdgeFlow: Corner hover triggered on corner %d", g_activeHoverCorner);
        }
    }
}

TriggerMode ParseTriggerMode(const PCWSTR str) {
    if (!str) return TRIGGER_NONE;
    if (wcscmp(str, L"hover") == 0) return TRIGGER_HOVER;
    if (wcscmp(str, L"lclick") == 0) return TRIGGER_LCLICK;
    if (wcscmp(str, L"rclick") == 0) return TRIGGER_RCLICK;
    return TRIGGER_NONE;
}

ActionType ParseAction(const PCWSTR actionStr, ActionType defaultVal) {
    if (!actionStr) return defaultVal;
    if (wcscmp(actionStr, L"vol_up") == 0) return ACTION_VOL_UP;
    if (wcscmp(actionStr, L"vol_down") == 0) return ACTION_VOL_DOWN;
    if (wcscmp(actionStr, L"vol_mute") == 0) return ACTION_VOL_MUTE;
    if (wcscmp(actionStr, L"alt_tab_next") == 0) return ACTION_ALT_TAB_NEXT;
    if (wcscmp(actionStr, L"alt_tab_prev") == 0) return ACTION_ALT_TAB_PREV;
    if (wcscmp(actionStr, L"space") == 0) return ACTION_SPACE;
    if (wcscmp(actionStr, L"bright_up") == 0) return ACTION_BRIGHT_UP;
    if (wcscmp(actionStr, L"bright_down") == 0) return ACTION_BRIGHT_DOWN;
    if (wcscmp(actionStr, L"vdesktop_next") == 0) return ACTION_VDESKTOP_NEXT;
    if (wcscmp(actionStr, L"vdesktop_prev") == 0) return ACTION_VDESKTOP_PREV;
    if (wcscmp(actionStr, L"show_desktop") == 0) return ACTION_SHOW_DESKTOP;
    if (wcscmp(actionStr, L"task_view") == 0) return ACTION_TASK_VIEW;
    if (wcscmp(actionStr, L"task_manager") == 0) return ACTION_TASK_MANAGER;
    if (wcscmp(actionStr, L"start_menu") == 0) return ACTION_START_MENU;
    if (wcscmp(actionStr, L"screen_snip") == 0) return ACTION_SCREEN_SNIP;
    if (wcscmp(actionStr, L"action_center") == 0) return ACTION_ACTION_CENTER;
    if (wcscmp(actionStr, L"file_explorer") == 0) return ACTION_FILE_EXPLORER;
    if (wcscmp(actionStr, L"lock_pc") == 0) return ACTION_LOCK_PC;
    if (wcscmp(actionStr, L"media_play_pause") == 0) return ACTION_MEDIA_PLAY_PAUSE;
    if (wcscmp(actionStr, L"media_next") == 0) return ACTION_MEDIA_NEXT;
    if (wcscmp(actionStr, L"media_prev") == 0) return ACTION_MEDIA_PREV;
    if (wcscmp(actionStr, L"none") == 0) return ACTION_NONE;
    return defaultVal;
}

void LoadSettings() {
    // Edge Controls
    g_settings.thickness = Wh_GetIntSetting(L"edge_thickness");
    if (g_settings.thickness <= 0) g_settings.thickness = 6;

    g_settings.alttab_cooldown = Wh_GetIntSetting(L"alttab_cooldown");
    if (g_settings.alttab_cooldown <= 0) g_settings.alttab_cooldown = 150;

    // Left Border - Default Disabled (Do nothing)
    PCWSTR lUp = Wh_GetStringSetting(L"left_scroll_up");
    PCWSTR lDown = Wh_GetStringSetting(L"left_scroll_down");
    PCWSTR lMid = Wh_GetStringSetting(L"left_mclick");
    g_settings.left.scroll_up = ParseAction(lUp, ACTION_NONE);
    g_settings.left.scroll_down = ParseAction(lDown, ACTION_NONE);
    g_settings.left.mclick = ParseAction(lMid, ACTION_NONE);
    if (lUp) Wh_FreeStringSetting(lUp); if (lDown) Wh_FreeStringSetting(lDown); if (lMid) Wh_FreeStringSetting(lMid);

    // Right Border - Default Disabled (Do nothing)
    PCWSTR rUp = Wh_GetStringSetting(L"right_scroll_up");
    PCWSTR rDown = Wh_GetStringSetting(L"right_scroll_down");
    PCWSTR rMid = Wh_GetStringSetting(L"right_mclick");
    g_settings.right.scroll_up = ParseAction(rUp, ACTION_NONE);
    g_settings.right.scroll_down = ParseAction(rDown, ACTION_NONE);
    g_settings.right.mclick = ParseAction(rMid, ACTION_NONE);
    if (rUp) Wh_FreeStringSetting(rUp); if (rDown) Wh_FreeStringSetting(rDown); if (rMid) Wh_FreeStringSetting(rMid);

    // Top Border - Default Disabled (Do nothing)
    PCWSTR tUp = Wh_GetStringSetting(L"top_scroll_up");
    PCWSTR tDown = Wh_GetStringSetting(L"top_scroll_down");
    PCWSTR tMid = Wh_GetStringSetting(L"top_mclick");
    g_settings.top.scroll_up = ParseAction(tUp, ACTION_NONE);
    g_settings.top.scroll_down = ParseAction(tDown, ACTION_NONE);
    g_settings.top.mclick = ParseAction(tMid, ACTION_NONE);
    if (tUp) Wh_FreeStringSetting(tUp); if (tDown) Wh_FreeStringSetting(tDown); if (tMid) Wh_FreeStringSetting(tMid);

    // Bottom Border - Default Disabled (Do nothing)
    PCWSTR bUp = Wh_GetStringSetting(L"bottom_scroll_up");
    PCWSTR bDown = Wh_GetStringSetting(L"bottom_scroll_down");
    PCWSTR bMid = Wh_GetStringSetting(L"bottom_mclick");
    g_settings.bottom.scroll_up = ParseAction(bUp, ACTION_NONE);
    g_settings.bottom.scroll_down = ParseAction(bDown, ACTION_NONE);
    g_settings.bottom.mclick = ParseAction(bMid, ACTION_NONE);
    if (bUp) Wh_FreeStringSetting(bUp); if (bDown) Wh_FreeStringSetting(bDown); if (bMid) Wh_FreeStringSetting(bMid);

    // Hot Corners - Default Disabled (Do nothing)
    g_settings.corner_size = Wh_GetIntSetting(L"corner_size");
    if (g_settings.corner_size <= 0) g_settings.corner_size = 10;

    g_settings.corner_hover_delay = Wh_GetIntSetting(L"corner_hover_delay");
    if (g_settings.corner_hover_delay <= 0) g_settings.corner_hover_delay = 250;

    // Top-Left Corner
    PCWSTR tlT = Wh_GetStringSetting(L"tl_trigger");
    PCWSTR tlA = Wh_GetStringSetting(L"tl_action");
    g_settings.tl.trigger = tlT ? ParseTriggerMode(tlT) : TRIGGER_NONE;
    g_settings.tl.action = ParseAction(tlA, ACTION_NONE);
    if (tlT) Wh_FreeStringSetting(tlT); if (tlA) Wh_FreeStringSetting(tlA);

    // Top-Right Corner
    PCWSTR trT = Wh_GetStringSetting(L"tr_trigger");
    PCWSTR trA = Wh_GetStringSetting(L"tr_action");
    g_settings.tr.trigger = trT ? ParseTriggerMode(trT) : TRIGGER_NONE;
    g_settings.tr.action = ParseAction(trA, ACTION_NONE);
    if (trT) Wh_FreeStringSetting(trT); if (trA) Wh_FreeStringSetting(trA);

    // Bottom-Left Corner
    PCWSTR blT = Wh_GetStringSetting(L"bl_trigger");
    PCWSTR blA = Wh_GetStringSetting(L"bl_action");
    g_settings.bl.trigger = blT ? ParseTriggerMode(blT) : TRIGGER_NONE;
    g_settings.bl.action = ParseAction(blA, ACTION_NONE);
    if (blT) Wh_FreeStringSetting(blT); if (blA) Wh_FreeStringSetting(blA);

    // Bottom-Right Corner
    PCWSTR brT = Wh_GetStringSetting(L"br_trigger");
    PCWSTR brA = Wh_GetStringSetting(L"br_action");
    g_settings.br.trigger = brT ? ParseTriggerMode(brT) : TRIGGER_NONE;
    g_settings.br.action = ParseAction(brA, ACTION_NONE);
    if (brT) Wh_FreeStringSetting(brT); if (brA) Wh_FreeStringSetting(brA);

    Wh_Log(L"EdgeFlow: Clean settings loaded successfully.");
}

// Low-latency Key Sender
void SendKeyCombo(const std::vector<WORD>& keys) {
    std::vector<INPUT> inputs;
    inputs.reserve(keys.size() * 2);

    for (WORD vk : keys) {
        INPUT in;
        ZeroMemory(&in, sizeof(in));
        in.type = INPUT_KEYBOARD;
        in.ki.wVk = vk;
        inputs.push_back(in);
    }
    for (auto it = keys.rbegin(); it != keys.rend(); ++it) {
        INPUT in;
        ZeroMemory(&in, sizeof(in));
        in.type = INPUT_KEYBOARD;
        in.ki.wVk = *it;
        in.ki.dwFlags = KEYEVENTF_KEYUP;
        inputs.push_back(in);
    }
    SendInput((UINT)inputs.size(), inputs.data(), sizeof(INPUT));
}

void SendSingleKey(WORD vk) {
    INPUT in[2];
    ZeroMemory(in, sizeof(in));

    in[0].type = INPUT_KEYBOARD;
    in[0].ki.wVk = vk;
    in[0].ki.dwFlags = KEYEVENTF_EXTENDEDKEY;

    in[1].type = INPUT_KEYBOARD;
    in[1].ki.wVk = vk;
    in[1].ki.dwFlags = KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP;

    SendInput(2, in, sizeof(INPUT));
}

// Exactly matches AutoHotkey SendInput("!{Tab}") in one atomic batch
void SendAhkAltTab(bool shift) {
    if (shift) {
        INPUT in[6];
        ZeroMemory(in, sizeof(in));

        in[0].type = INPUT_KEYBOARD; in[0].ki.wVk = VK_MENU;
        in[1].type = INPUT_KEYBOARD; in[1].ki.wVk = VK_SHIFT;
        in[2].type = INPUT_KEYBOARD; in[2].ki.wVk = VK_TAB;
        in[3].type = INPUT_KEYBOARD; in[3].ki.wVk = VK_TAB; in[3].ki.dwFlags = KEYEVENTF_KEYUP;
        in[4].type = INPUT_KEYBOARD; in[4].ki.wVk = VK_SHIFT; in[4].ki.dwFlags = KEYEVENTF_KEYUP;
        in[5].type = INPUT_KEYBOARD; in[5].ki.wVk = VK_MENU; in[5].ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(6, in, sizeof(INPUT));
    } else {
        INPUT in[4];
        ZeroMemory(in, sizeof(in));

        in[0].type = INPUT_KEYBOARD; in[0].ki.wVk = VK_MENU;
        in[1].type = INPUT_KEYBOARD; in[1].ki.wVk = VK_TAB;
        in[2].type = INPUT_KEYBOARD; in[2].ki.wVk = VK_TAB; in[2].ki.dwFlags = KEYEVENTF_KEYUP;
        in[3].type = INPUT_KEYBOARD; in[3].ki.wVk = VK_MENU; in[3].ki.dwFlags = KEYEVENTF_KEYUP;
        SendInput(4, in, sizeof(INPUT));
    }
}

// Background Worker Thread: Runs DDC/CI I2C hardware monitor calls asynchronously!
DWORD WINAPI BrightnessWorkerThread(LPVOID lpParam) {
    int cachedBrightness = -1;
    DWORD cachedMin = 0, cachedMax = 100;
    HMONITOR cachedHMon = NULL;
    HANDLE cachedPhysMon = NULL;

    while (g_brightnessRunning) {
        WaitForSingleObject(g_hBrightnessEvent, 500);
        if (!g_brightnessRunning) break;

        LONG delta = InterlockedExchange(&g_brightnessDelta, 0);
        if (delta == 0) continue;

        if (!g_pGetNumberOfPhysicalMonitorsFromHMONITOR || !g_pSetMonitorBrightness) {
            continue;
        }

        POINT pt = g_brightnessPt;
        HMONITOR hMon = MonitorFromPoint(pt, MONITOR_DEFAULTTONEAREST);
        if (!hMon) continue;

        if (hMon != cachedHMon || cachedPhysMon == NULL || cachedBrightness < 0) {
            if (cachedPhysMon) {
                PHYSICAL_MONITOR pm = { cachedPhysMon, L"" };
                g_pDestroyPhysicalMonitors(1, &pm);
                cachedPhysMon = NULL;
            }
            cachedHMon = hMon;
            DWORD numPhys = 0;
            if (g_pGetNumberOfPhysicalMonitorsFromHMONITOR(hMon, &numPhys) && numPhys > 0) {
                std::vector<PHYSICAL_MONITOR> mons(numPhys);
                if (g_pGetPhysicalMonitorsFromHMONITOR(hMon, numPhys, mons.data())) {
                    cachedPhysMon = mons[0].hPhysicalMonitor;
                    DWORD curB = 0;
                    if (g_pGetMonitorBrightness(cachedPhysMon, &cachedMin, &curB, &cachedMax)) {
                        cachedBrightness = (int)curB;
                    }
                    if (numPhys > 1) {
                        g_pDestroyPhysicalMonitors(numPhys - 1, &mons[1]);
                    }
                }
            }
        }

        if (cachedPhysMon && cachedBrightness >= 0) {
            int step = (int)(cachedMax - cachedMin) / 20; // 5% per notch
            if (step < 1) step = 1;
            cachedBrightness += (int)delta * step;
            if (cachedBrightness > (int)cachedMax) cachedBrightness = (int)cachedMax;
            if (cachedBrightness < (int)cachedMin) cachedBrightness = (int)cachedMin;

            g_pSetMonitorBrightness(cachedPhysMon, (DWORD)cachedBrightness);
            Wh_Log(L"EdgeFlow: Brightness smoothly set to %d", cachedBrightness);
        }
    }

    if (cachedPhysMon && g_pDestroyPhysicalMonitors) {
        PHYSICAL_MONITOR pm = { cachedPhysMon, L"" };
        g_pDestroyPhysicalMonitors(1, &pm);
        cachedPhysMon = NULL;
    }
    return 0;
}

void RequestBrightnessChange(POINT pt, bool increase) {
    g_brightnessPt = pt;
    InterlockedAdd(&g_brightnessDelta, increase ? 1 : -1);
    if (g_hBrightnessEvent) {
        SetEvent(g_hBrightnessEvent);
    }
}

// Action Dispatcher
void TriggerAction(ActionType action, POINT pt) {
    switch (action) {
        case ACTION_VOL_UP:
            SendSingleKey(VK_VOLUME_UP);
            break;
        case ACTION_VOL_DOWN:
            SendSingleKey(VK_VOLUME_DOWN);
            break;
        case ACTION_VOL_MUTE:
            SendSingleKey(VK_VOLUME_MUTE);
            break;
        case ACTION_SPACE:
            SendSingleKey(VK_SPACE);
            break;
        case ACTION_ALT_TAB_NEXT:
            SendAhkAltTab(false);
            break;
        case ACTION_ALT_TAB_PREV:
            SendAhkAltTab(true);
            break;
        case ACTION_BRIGHT_UP:
            RequestBrightnessChange(pt, true);
            break;
        case ACTION_BRIGHT_DOWN:
            RequestBrightnessChange(pt, false);
            break;
        case ACTION_VDESKTOP_NEXT:
            SendKeyCombo({ VK_LCONTROL, VK_LWIN, VK_RIGHT });
            break;
        case ACTION_VDESKTOP_PREV:
            SendKeyCombo({ VK_LCONTROL, VK_LWIN, VK_LEFT });
            break;
        case ACTION_SHOW_DESKTOP: {
            HWND hTray = FindWindowW(L"Shell_TrayWnd", NULL);
            if (hTray) {
                PostMessage(hTray, WM_COMMAND, 419, 0);
            } else {
                SendKeyCombo({ VK_LWIN, 'D' });
            }
            break;
        }
        case ACTION_TASK_VIEW: {
            HWND hTray = FindWindowW(L"Shell_TrayWnd", NULL);
            if (hTray) {
                PostMessage(hTray, WM_COMMAND, 407, 0);
            } else {
                SendKeyCombo({ VK_LWIN, VK_TAB });
            }
            break;
        }
        case ACTION_TASK_MANAGER:
            SendKeyCombo({ VK_LCONTROL, VK_LSHIFT, VK_ESCAPE });
            break;
        case ACTION_START_MENU: {
            HWND hTray = FindWindowW(L"Shell_TrayWnd", NULL);
            if (hTray) {
                PostMessage(hTray, WM_SYSCOMMAND, SC_TASKLIST, 0);
            } else {
                SendKeyCombo({ VK_LCONTROL, VK_ESCAPE });
            }
            break;
        }
        case ACTION_SCREEN_SNIP:
            SendKeyCombo({ VK_LWIN, VK_LSHIFT, 'S' });
            break;
        case ACTION_ACTION_CENTER:
            SendKeyCombo({ VK_LWIN, 'N' });
            break;
        case ACTION_FILE_EXPLORER:
            SendKeyCombo({ VK_LWIN, 'E' });
            break;
        case ACTION_LOCK_PC:
            LockWorkStation();
            break;
        case ACTION_MEDIA_PLAY_PAUSE:
            SendSingleKey(VK_MEDIA_PLAY_PAUSE);
            break;
        case ACTION_MEDIA_NEXT:
            SendSingleKey(VK_MEDIA_NEXT_TRACK);
            break;
        case ACTION_MEDIA_PREV:
            SendSingleKey(VK_MEDIA_PREV_TRACK);
            break;
        default:
            break;
    }
}

// Multi-Monitor Edge Detector
EdgeLocation GetCurrentEdge(POINT pt) {
    HMONITOR hMon = MonitorFromPoint(pt, MONITOR_DEFAULTTONEAREST);
    if (!hMon) return EDGE_NONE;

    MONITORINFO mi = { sizeof(mi) };
    if (!GetMonitorInfo(hMon, &mi)) return EDGE_NONE;

    int t = g_settings.thickness;

    if (pt.x < mi.rcMonitor.left + t) return EDGE_LEFT;
    if (pt.x >= mi.rcMonitor.right - t) return EDGE_RIGHT;
    if (pt.y < mi.rcMonitor.top + t) return EDGE_TOP;
    if (pt.y >= mi.rcMonitor.bottom - t) return EDGE_BOTTOM;

    return EDGE_NONE;
}

// Multi-Monitor Hot Corner Detector
CornerLocation GetCurrentCorner(POINT pt) {
    HMONITOR hMon = MonitorFromPoint(pt, MONITOR_DEFAULTTONEAREST);
    if (!hMon) return CORNER_NONE;

    MONITORINFO mi = { sizeof(mi) };
    if (!GetMonitorInfo(hMon, &mi)) return CORNER_NONE;

    int c = g_settings.corner_size;

    bool isLeft = (pt.x < mi.rcMonitor.left + c);
    bool isRight = (pt.x >= mi.rcMonitor.right - c);
    bool isTop = (pt.y < mi.rcMonitor.top + c);
    bool isBottom = (pt.y >= mi.rcMonitor.bottom - c);

    if (isTop && isLeft) return CORNER_TOP_LEFT;
    if (isTop && isRight) return CORNER_TOP_RIGHT;
    if (isBottom && isLeft) return CORNER_BOTTOM_LEFT;
    if (isBottom && isRight) return CORNER_BOTTOM_RIGHT;

    return CORNER_NONE;
}

// Low-Level Mouse Hook Callback
LRESULT CALLBACK LowLevelMouseProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION) {
        PMSLLHOOKSTRUCT pMouse = (PMSLLHOOKSTRUCT)lParam;

        // --- HOT CORNERS (Hover Tracking) ---
        CornerLocation currentCorner = GetCurrentCorner(pMouse->pt);
        if (wParam == WM_MOUSEMOVE) {
            if (currentCorner != CORNER_NONE) {
                CornerConfig* cCfg = GetCornerConfig(currentCorner);
                if (cCfg && cCfg->trigger == TRIGGER_HOVER && cCfg->action != ACTION_NONE) {
                    if (currentCorner != g_activeHoverCorner) {
                        if (g_cornerHoverTimerId) KillTimer(NULL, g_cornerHoverTimerId);
                        g_activeHoverCorner = currentCorner;
                        g_cornerHoverTriggered = false;
                        g_cornerHoverTimerId = SetTimer(NULL, 2, (UINT)g_settings.corner_hover_delay, CornerHoverTimerProc);
                    }
                } else {
                    if (g_activeHoverCorner != CORNER_NONE) {
                        if (g_cornerHoverTimerId) { KillTimer(NULL, g_cornerHoverTimerId); g_cornerHoverTimerId = 0; }
                        g_activeHoverCorner = CORNER_NONE;
                        g_cornerHoverTriggered = false;
                    }
                }
            } else {
                if (g_activeHoverCorner != CORNER_NONE) {
                    if (g_cornerHoverTimerId) { KillTimer(NULL, g_cornerHoverTimerId); g_cornerHoverTimerId = 0; }
                    g_activeHoverCorner = CORNER_NONE;
                    g_cornerHoverTriggered = false;
                }
            }
        }

        // --- HOT CORNERS (Left / Right Click Triggers) ---
        if (currentCorner != CORNER_NONE) {
            CornerConfig* cCfg = GetCornerConfig(currentCorner);
            if (cCfg && cCfg->trigger != TRIGGER_NONE && cCfg->action != ACTION_NONE) {
                // Left Click Trigger
                if (cCfg->trigger == TRIGGER_LCLICK) {
                    if (wParam == WM_LBUTTONDOWN) {
                        TriggerAction(cCfg->action, pMouse->pt);
                        return 1; // Eat left click
                    } else if (wParam == WM_LBUTTONUP) {
                        return 1;
                    }
                }
                // Right Click Trigger
                else if (cCfg->trigger == TRIGGER_RCLICK) {
                    if (wParam == WM_RBUTTONDOWN) {
                        TriggerAction(cCfg->action, pMouse->pt);
                        return 1; // Eat right click
                    } else if (wParam == WM_RBUTTONUP) {
                        return 1;
                    }
                }
            }
        }

        // --- EDGE CONTROLS (Wheel Scroll & Middle Click) ---
        EdgeLocation edge = GetCurrentEdge(pMouse->pt);
        if (edge != EDGE_NONE) {
            EdgeConfig* cfg = nullptr;
            if (edge == EDGE_LEFT) cfg = &g_settings.left;
            else if (edge == EDGE_RIGHT) cfg = &g_settings.right;
            else if (edge == EDGE_TOP) cfg = &g_settings.top;
            else if (edge == EDGE_BOTTOM) cfg = &g_settings.bottom;

            if (cfg) {
                // Wheel Scroll
                if (wParam == WM_MOUSEWHEEL) {
                    short delta = GET_WHEEL_DELTA_WPARAM(pMouse->mouseData);
                    ActionType action = (delta > 0) ? cfg->scroll_up : cfg->scroll_down;
                    if (action != ACTION_NONE) {
                        if (action == ACTION_ALT_TAB_NEXT || action == ACTION_ALT_TAB_PREV) {
                            static ULONGLONG s_lastAltTab = 0;
                            ULONGLONG now = GetTickCount64();
                            if (now - s_lastAltTab < (ULONGLONG)g_settings.alttab_cooldown) {
                                return 1;
                            }
                            s_lastAltTab = now;
                        }

                        TriggerAction(action, pMouse->pt);
                        return 1; // Eat event: Zero background scrolling
                    }
                }
                // Middle Click Down
                else if (wParam == WM_MBUTTONDOWN) {
                    if (cfg->mclick != ACTION_NONE) {
                        TriggerAction(cfg->mclick, pMouse->pt);
                        return 1;
                    }
                }
                // Middle Click Up
                else if (wParam == WM_MBUTTONUP) {
                    if (cfg->mclick != ACTION_NONE) return 1;
                }
            }
        }
    }
    return CallNextHookEx(g_mouseHook, nCode, wParam, lParam);
}

// Dedicated Hook Thread with Message Loop
DWORD WINAPI MouseHookThread(LPVOID lpParam) {
    HMODULE hMod = NULL;
    GetModuleHandleEx(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        (LPCWSTR)MouseHookThread,
        &hMod
    );

    g_mouseHook = SetWindowsHookEx(WH_MOUSE_LL, LowLevelMouseProc, hMod, 0);
    if (!g_mouseHook) {
        Wh_Log(L"EdgeFlow: SetWindowsHookEx failed with error %lu", GetLastError());
    } else {
        Wh_Log(L"EdgeFlow: Low-level mouse hook installed successfully on thread %lu", GetCurrentThreadId());
    }

    if (g_hHookReadyEvent) {
        SetEvent(g_hHookReadyEvent);
    }

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    if (g_cornerHoverTimerId) {
        KillTimer(NULL, g_cornerHoverTimerId);
        g_cornerHoverTimerId = 0;
    }

    if (g_mouseHook) {
        UnhookWindowsHookEx(g_mouseHook);
        g_mouseHook = NULL;
    }
    Wh_Log(L"EdgeFlow: Hook thread exiting.");
    return 0;
}

BOOL Wh_ModInit() {
    Wh_Log(L"EdgeFlow: Initializing Clean Edge Controls and Hot Corners...");
    LoadSettings();

    // 1. Initialize DXVA2 library & functions once at startup
    g_hDxva2 = LoadLibraryW(L"dxva2.dll");
    if (g_hDxva2) {
        g_pGetNumberOfPhysicalMonitorsFromHMONITOR = (pfnGetNumberOfPhysicalMonitorsFromHMONITOR)GetProcAddress(g_hDxva2, "GetNumberOfPhysicalMonitorsFromHMONITOR");
        g_pGetPhysicalMonitorsFromHMONITOR = (pfnGetPhysicalMonitorsFromHMONITOR)GetProcAddress(g_hDxva2, "GetPhysicalMonitorsFromHMONITOR");
        g_pGetMonitorBrightness = (pfnGetMonitorBrightness)GetProcAddress(g_hDxva2, "GetMonitorBrightness");
        g_pSetMonitorBrightness = (pfnSetMonitorBrightness)GetProcAddress(g_hDxva2, "SetMonitorBrightness");
        g_pDestroyPhysicalMonitors = (pfnDestroyPhysicalMonitors)GetProcAddress(g_hDxva2, "DestroyPhysicalMonitors");
    }

    // 2. Start Async Brightness Worker Thread
    g_brightnessRunning = true;
    g_hBrightnessEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
    g_hBrightnessThread = CreateThread(NULL, 0, BrightnessWorkerThread, NULL, 0, &g_brightnessThreadId);

    // 3. Start Dedicated Mouse Hook Thread
    g_hHookReadyEvent = CreateEvent(NULL, TRUE, FALSE, NULL);
    g_hHookThread = CreateThread(NULL, 0, MouseHookThread, NULL, 0, &g_hookThreadId);
    if (!g_hHookThread) {
        Wh_Log(L"EdgeFlow: Failed to create hook thread!");
        if (g_hHookReadyEvent) CloseHandle(g_hHookReadyEvent);
        return FALSE;
    }

    WaitForSingleObject(g_hHookReadyEvent, 3000);
    CloseHandle(g_hHookReadyEvent);
    g_hHookReadyEvent = NULL;

    if (!g_mouseHook) {
        Wh_Log(L"EdgeFlow: Mouse hook was not installed!");
        return FALSE;
    }

    Wh_Log(L"EdgeFlow: Initialized successfully!");
    return TRUE;
}

void Wh_ModUninit() {
    Wh_Log(L"EdgeFlow: Uninitializing...");

    // Stop Mouse Hook Thread
    if (g_hookThreadId) {
        PostThreadMessage(g_hookThreadId, WM_QUIT, 0, 0);
        if (g_hHookThread) {
            WaitForSingleObject(g_hHookThread, 2000);
            CloseHandle(g_hHookThread);
            g_hHookThread = NULL;
        }
        g_hookThreadId = 0;
    }

    // Stop Brightness Worker Thread
    g_brightnessRunning = false;
    if (g_hBrightnessEvent) {
        SetEvent(g_hBrightnessEvent);
        if (g_hBrightnessThread) {
            WaitForSingleObject(g_hBrightnessThread, 2000);
            CloseHandle(g_hBrightnessThread);
            g_hBrightnessThread = NULL;
        }
        CloseHandle(g_hBrightnessEvent);
        g_hBrightnessEvent = NULL;
    }

    // Free DXVA2
    if (g_hDxva2) {
        FreeLibrary(g_hDxva2);
        g_hDxva2 = NULL;
    }
}

void Wh_ModSettingsChanged() {
    Wh_Log(L"EdgeFlow: Settings changed, reloading...");
    LoadSettings();
}
