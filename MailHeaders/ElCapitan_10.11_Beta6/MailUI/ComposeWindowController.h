/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "ComposeViewControllerDelegate.h"
#import "MailFullScreenWindowDelegate.h"
#import "NSAnimationDelegate.h"
#import "NSToolbarDelegate.h"
#import "NSWindowRestoration.h"
#import "PopoutAnimationContentProvider.h"
#import "TabBarViewDelegate.h"

@class ComposeViewController, MailInspectorBar, MailInspectorBarItemController, NSDictionary, NSMenu, NSString, NSTitlebarAccessoryViewController, TabBarView, TabBarViewController;

@interface ComposeWindowController : NSWindowController <TabBarViewDelegate, ComposeViewControllerDelegate, NSAnimationDelegate, NSToolbarDelegate, NSWindowRestoration, MailFullScreenWindowDelegate, PopoutAnimationContentProvider>
{
    MailInspectorBar *_inspectorBar;
    BOOL _sendAnimationCancelled;
    BOOL _sendAnimationIsInProgress;
    BOOL _shouldCloseWindowWhenAnimationCompletes;
    BOOL _inspectorBarDisplayed;
    TabBarView *_tabBarView;
    TabBarViewController *_tabBarViewController;
    NSTitlebarAccessoryViewController *_toolbarNewTabButtonViewController;
    NSDictionary *_toolbarItems;
    MailInspectorBarItemController *_inspectorBarItemController;
    NSMenu *_disclosureMenu;
    id _loadCompletionHandler;
}

+ (id)_cachedToolbarSnapshot;
+ (id)_toolbarImageURL;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
+ (id)keyPathsForValuesAffectingTitle;
@property(copy, nonatomic) id loadCompletionHandler; // @synthesize loadCompletionHandler=_loadCompletionHandler;
@property(retain, nonatomic) NSMenu *disclosureMenu; // @synthesize disclosureMenu=_disclosureMenu;
@property(retain, nonatomic) MailInspectorBarItemController *inspectorBarItemController; // @synthesize inspectorBarItemController=_inspectorBarItemController;
@property(nonatomic) BOOL inspectorBarDisplayed; // @synthesize inspectorBarDisplayed=_inspectorBarDisplayed;
@property(nonatomic) BOOL shouldCloseWindowWhenAnimationCompletes; // @synthesize shouldCloseWindowWhenAnimationCompletes=_shouldCloseWindowWhenAnimationCompletes;
@property(nonatomic) BOOL sendAnimationIsInProgress; // @synthesize sendAnimationIsInProgress=_sendAnimationIsInProgress;
@property(nonatomic) BOOL sendAnimationCancelled; // @synthesize sendAnimationCancelled=_sendAnimationCancelled;
@property(retain, nonatomic) NSDictionary *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain, nonatomic) NSTitlebarAccessoryViewController *toolbarNewTabButtonViewController; // @synthesize toolbarNewTabButtonViewController=_toolbarNewTabButtonViewController;
@property(retain, nonatomic) TabBarViewController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
@property(retain, nonatomic) TabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
- (void).cxx_destruct;
- (void)flushRecordedKeystrokes;
- (void)beginRecordingKeystrokes;
- (struct CGRect)_toolbarRect;
- (id)getContentGeometryData;
- (void)getSnapshotParts:(id)arg1;
- (void)_cacheToolbarSnapshot;
- (void)previousTab:(id)arg1;
- (void)nextTab:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)closeAll:(id)arg1;
- (void)performClose:(id)arg1;
- (void)closeTab:(id)arg1;
@property(readonly, nonatomic) MailInspectorBar *inspectorBar;
- (void)_updateInspectorBar:(BOOL)arg1;
- (void)updateInspectorBar;
@property(nonatomic) BOOL shouldDisplayInspectorBar;
- (void)toggleComposeFormatInspectorBar:(id)arg1;
- (void)composeViewControllerDidFinishLoading:(id)arg1;
- (void)composeViewControllerShouldShow:(id)arg1;
- (void)composeViewControllerShouldClose:(id)arg1;
- (void)composeViewControllerDidSend:(id)arg1;
- (void)showSheetForAlert:(id)arg1 completion:(id)arg2;
- (void)restoreFrame;
- (id)_dictionaryRepresentation;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)_closeTabBarViewItems;
- (void)_closeAllTabsExceptTab:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_cancelSendAnimation;
- (void)_sendAnimationCompleted;
- (void)_performSendAnimation;
- (BOOL)tabBarView:(id)arg1 acceptDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBarView:(id)arg1 validateDrop:(id)arg2;
- (void)tabBarView:(id)arg1 didFinishTransitionAnimationForWindow:(id)arg2;
- (id)tabBarView:(id)arg1 destinationWindowForDetachedTabBarViewItem:(id)arg2;
- (id)tabBarView:(id)arg1 detachedWindowImageForDraggedTabBarViewItem:(id)arg2;
- (BOOL)tabBarView:(id)arg1 acceptTabDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBarView:(id)arg1 validateTabDrop:(id)arg2;
- (void)moveTabToNewWindowFromMenu:(id)arg1;
- (void)closeOtherTabsFromMenu:(id)arg1;
- (void)closeTabFromMenu:(id)arg1;
- (id)tabBarView:(id)arg1 menuForTabBarViewItem:(id)arg2 event:(id)arg3;
- (void)tabBarView:(id)arg1 didMoveTabBarViewItem:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_tabBarView:(id)arg1 forceCloseTabBarViewItem:(id)arg2;
- (void)_tabBarView:(id)arg1 performSendAnimationOfTabBarViewItem:(id)arg2;
- (void)tabBarView:(id)arg1 closeTabBarViewItem:(id)arg2;
- (id)selectedTabBarViewItemAfterClosingCurrentTabInTabBarView:(id)arg1;
- (void)tabBarView:(id)arg1 selectTabBarViewItem:(id)arg2;
- (void)createNewTabInTabBarView:(id)arg1;
- (void)tabBarViewDidZoomIn:(id)arg1;
- (void)explodeTabsIntoSeparateWindows;
- (id)tabNames;
- (void)addComposeViewController:(id)arg1;
- (void)newTabWithinWindow:(id)arg1;
- (id)_menuForListsItem;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)animationContentProvider:(id)arg1;
- (void)synchronizeIncludeAttachmentsToolbarItem:(id)arg1;
- (void)configureSegmentedItem:(id)arg1 withDictionary:(id)arg2 forSegment:(long long)arg3;
- (void)toolbarWillAddItem:(id)arg1;
- (void)updateSendButtonStateInToolbar;
- (void)_resetCloseMenus;
- (void)_updateCloseMenus;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)synchronizeToolbarReplyWithType:(long long)arg1;
- (void)_synchronizeChangeReplyItem:(id)arg1 messageType:(long long)arg2;
- (id)toolbarIdentifier;
- (void)_setupToolbar;
- (void)_addOrRemoveNewTabButtonInToolbarIfNecessary;
@property(readonly, copy, nonatomic) NSString *title;
- (void)windowDidLoad;
@property(retain) ComposeViewController *contentViewController;
- (id)windowNibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

