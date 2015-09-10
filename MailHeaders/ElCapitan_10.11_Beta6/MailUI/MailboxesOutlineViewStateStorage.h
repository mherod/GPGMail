/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSConditionLock, NSMutableDictionary, NSMutableSet, NSSet;

@interface MailboxesOutlineViewStateStorage : NSObject
{
    NSConditionLock *_shouldShowVariablesLock;
    unsigned long long _shouldShowVariablesToUpdate;
    unsigned long long _shouldShowVariablesToReset;
    BOOL _shouldShowOutbox;
    BOOL _shouldShowDrafts;
    BOOL _shouldShowTrash;
    BOOL _shouldShowJunk;
    BOOL _shouldShowFlags;
    BOOL _shouldShowArchive;
    BOOL _shouldShowVIPs;
    NSMutableSet *_visibleFlagMailboxes;
    id _firstUpdateLock;
    BOOL _firstUpdate;
    id _isListeningForVariablesLock;
    BOOL _isListeningForDocumentEditorNotifications;
    BOOL _isListeningForMessagesAdded;
    BOOL _isListeningForFlagUpdates;
    id _sectionItemsLock;
    NSArray *_sectionItems;
    NSArray *_visibleSectionItems;
    NSArray *_visibleMailboxes;
    id _defaultSectionItemsLock;
    id _activityMonitorMailboxMapsLock;
    NSMutableDictionary *_mailboxesPerActivityMonitor;
    NSMutableDictionary *_activityMonitorsPerMailbox;
    NSMutableDictionary *_finishedActivityMonitorCountPerMailbox;
    NSConditionLock *_changedMailboxesLock;
    NSMutableSet *_changedMailboxes;
    NSArray *_draggedMailboxes;
    NSSet *_observedTaskNames;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSSet *observedTaskNames; // @synthesize observedTaskNames=_observedTaskNames;
@property(retain) NSArray *draggedMailboxes; // @synthesize draggedMailboxes=_draggedMailboxes;
- (void).cxx_destruct;
- (BOOL)_archiveMessagesOrSubmailboxesExist;
@property(readonly, nonatomic) BOOL flagsExist;
@property(readonly, nonatomic) BOOL draftsExist;
- (void)_accountInitializedMailboxList:(id)arg1;
- (id)copyActivityMonitorsForMailboxes:(id)arg1 finishedCount:(unsigned long long *)arg2;
- (void)_postChangedMailboxesNotification;
- (void)_notifyChangedMailboxes;
- (void)_setNeedsToNotifyChangedMailboxes:(id)arg1;
- (void)_triggerChangedMailboxesNotification;
- (BOOL)_removeActivityMonitor:(id)arg1 fromMailbox:(id)arg2;
- (BOOL)_addActivityMonitor:(id)arg1 toMailbox:(id)arg2;
- (id)_copyMailboxesForActivityMonitor:(id)arg1;
- (void)_monitoredActivityChanged:(id)arg1;
- (id)_copyKeyForObject:(id)arg1;
@property BOOL shouldShowVIPs;
@property BOOL shouldShowArchive;
@property BOOL shouldShowFlags;
@property BOOL shouldShowJunk;
@property BOOL shouldShowTrash;
@property BOOL shouldShowDrafts;
@property BOOL shouldShowOutbox;
- (void)_setShouldShowVariable:(char *)arg1 withMask:(unsigned long long)arg2 to:(BOOL)arg3;
@property(readonly, copy) NSArray *visibleMailboxes;
@property(readonly, copy) NSArray *visibleSectionItems;
@property(readonly, copy) NSArray *sectionItems;
- (void)_mailboxDisplayCountChanged:(id)arg1;
- (void)_allViewersDidClose:(id)arg1;
- (void)_mailboxListingDidChange:(id)arg1;
- (void)_editorUserSaved:(id)arg1;
- (void)_editorClosed:(id)arg1;
- (void)_viewerPreferencesChanged:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_handleOutboxCountChange;
- (void)_outboxCountDidChange:(id)arg1;
- (void)_deliveryFailureHappened:(id)arg1;
- (void)_VIPsChanged:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_messagesWereAddedToMailboxes:(id)arg1;
- (void)moveSectionItem:(id)arg1 beforeItem:(id)arg2;
- (void)_updateSectionItemsWithNewlyVisibleFlagMailboxes:(id)arg1;
- (void)_writeVisibleFlagsMailboxesToDefaults;
- (void)_readVisibleFlagsMailboxesFromDefaults;
- (void)_writeSectionItemsToDefaults;
- (void)_writeSectionItems:(id)arg1 toDefaultsWithKey:(id)arg2;
- (void)_readSectionItemsFromDefaults;
- (id)_sectionItemsFromDefaultSectionItems:(id)arg1;
- (void)_updateIsListeningForVariables;
- (void)_updateShouldShowVariables;
- (void)_setNeedsToResetShouldShowVariablesWithMask:(unsigned long long)arg1;
- (void)_setNeedsToUpdateShouldShowVariablesWithMask:(unsigned long long)arg1;
- (void)_setShouldShowVariablesNeedUpdateWithUpdateMask:(unsigned long long)arg1 resetMask:(unsigned long long)arg2;
- (void)_triggerShouldShowVariablesUpdate;
- (void)dealloc;
- (id)init;

@end

