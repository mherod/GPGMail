/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFMessageSortContext.h"
#import "MFMessageSortingValueDelegate.h"
#import "MessageMall.h"

@class MCInvocationQueue, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MessageMiniMall : NSObject <MessageMall, MFMessageSortContext, MFMessageSortingValueDelegate>
{
    MCInvocationQueue *_filterTasks;
    MCInvocationQueue *_userTasks;
    BOOL _sortedAscending;
    BOOL _wantsToBeSortedAscending;
    BOOL _includeDeleted;
    BOOL _focused;
    BOOL _isInThreadedMode;
    BOOL _wantsToBeInThreadedMode;
    BOOL _displayingToColumn;
    BOOL _selectionIncludesSmartMailbox;
    BOOL _useLibraryIDNumbering;
    BOOL _alwaysShowCopies;
    int _currentFilterSeriesID;
    NSArray *_selectedMailboxes;
    NSArray *_expandedSelectedMailboxes;
    NSMutableArray *_allStores;
    NSMutableSet *_storesWaitingToLoad;
    NSMutableDictionary *_allMessagesByStore;
    NSMutableDictionary *_primaryMessagesByConversationByStore;
    NSMutableDictionary *_nonDeletedMessagesByStore;
    NSMutableDictionary *_sortedMessagesByStore;
    NSMutableDictionary *_sortedNonDeletedMessagesByStore;
    NSMutableArray *_filteredMessages;
    NSMutableArray *_sortedFilteredMessages;
    NSMutableSet *_filteredThreads;
    NSMutableSet *_hiddenMessages;
    NSMutableSet *_undeletedMessages;
    NSMutableSet *_focusedMessages;
    NSMutableSet *_storesBeingOpened;
    NSString *_sortOrder;
    NSString *_secondarySortOrder;
    NSMutableDictionary *_messageSortValues;
    NSMutableDictionary *_messagesByConversationID;
    NSMutableDictionary *_oldestMessageForConversationID;
    NSMutableDictionary *_relatedMessagesByConversationID;
    NSMutableDictionary *_messageThreadingDataByMessage;
    NSMapTable *_messagesByID;
    NSMutableSet *_messageIDsToShowAllCopiesOf;
    NSMutableDictionary *_originalMessageByMessageID;
    NSMutableDictionary *_messageCopiesByMessageID;
    BOOL _filteredMessagesCleared;
    BOOL _filteredListIncludesAllMessages;
    BOOL _isUsedForSearching;
}

+ (id)sortComparatorForThreads;
+ (id)sortComparatorForThreadsWithSortOrderAscending:(SEL)arg1;
+ (void)initialize;
@property(nonatomic) BOOL isUsedForSearching; // @synthesize isUsedForSearching=_isUsedForSearching;
@property BOOL filteredListIncludesAllMessages; // @synthesize filteredListIncludesAllMessages=_filteredListIncludesAllMessages;
- (void)_logSearchDebugInfo:(id)arg1 sortValues:(id)arg2;
- (id)_debugSearchStringForMessage:(id)arg1 sortValues:(id)arg2;
- (id)searchDescriptionForMessage:(id)arg1 sortValue:(id)arg2 andSortOrder:(id)arg3;
- (void)_removeMessage:(id)arg1 fromMallArray:(id)arg2 sortValues:(id)arg3 atIndex:(unsigned long long)arg4 fromFunction:(const char *)arg5 andLine:(int)arg6;
- (unsigned long long)_indexOfMessage:(id)arg1 inMallArray:(id)arg2 sortValues:(id)arg3 usingComparator:(id)arg4 fromFunction:(void)arg5 andLine:(const char *)arg6;
- (unsigned long long)_removeMessage:(id)arg1 fromMallArray:(id)arg2 sortValues:(id)arg3 usingComparator:(id)arg4 fromFunction:(void)arg5 andLine:(const char *)arg6;
- (unsigned long long)_insertMessageIfAbsent:(id)arg1 intoMallArray:(id)arg2 sortValues:(id)arg3 usingComparator:(id)arg4 fromFunction:(void)arg5 andLine:(const char *)arg6;
- (id)description;
- (void)_updateThreadInfoForMessages:(id)arg1;
- (void)_resetThreadInfoFromFilteredMessages;
- (void)updateThreadingDictionaryForMessages:(id)arg1;
- (void)_clearThreadInfo;
- (void)_deduceThreadHierarchyForMessages:(id)arg1;
- (void)_setupNewParentMessageThreadingData:(id)arg1 parent:(id)arg2 conversationID:(id)arg3;
- (void)_cleanUpRelatedMessageDataForConversationIDs:(id)arg1;
- (BOOL)_removeRelatedMessageDataForMessage:(id)arg1 withConversationID:(id)arg2;
- (void)_addRelatedMessageDataForMessage:(id)arg1 withConversationID:(id)arg2;
- (BOOL)_removeConversationDataForMessage:(id)arg1 withConversationID:(id)arg2;
- (void)_addConversationDataForMessage:(id)arg1 withConversationID:(id)arg2;
- (id)allMessagesForConversationID:(long long)arg1;
- (id)primaryMessagesForConversationID:(long long)arg1;
- (BOOL)hasNonDuplicateRelatedMessages:(id)arg1;
- (id)allRelatedMessagesForMessage:(id)arg1;
- (id)originalOfMessage:(id)arg1;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (void)hideAllCopiesOfMessages:(id)arg1;
- (void)showAllCopiesOfMessage:(id)arg1;
- (id)messageIDsToShowAllCopiesOf;
- (id)unfilteredThreadForMessage:(id)arg1;
- (id)filteredThreadForMessage:(id)arg1;
- (BOOL)_hasFilteredThreadForMessage:(id)arg1;
- (id)threadAtIndex:(unsigned long long)arg1;
- (id)threadForMessage:(id)arg1;
- (id)messageForMessageID:(id)arg1;
- (BOOL)messageIsPartOfAThread:(id)arg1;
- (id)parentOfMessage:(id)arg1;
- (id)repliesToMessage:(id)arg1;
- (void)addMessagesInSameThreadAsMessage:(id)arg1 toSet:(id)arg2;
- (void)_unlockedAddMessagesInSameThreadAsMessage:(id)arg1 toSetOrArray:(id)arg2;
- (void)routeMessages:(id)arg1 fromStores:(id)arg2;
- (void)routeMessages:(id)arg1 fromMailboxes:(id)arg2;
- (void)routeMessages:(id)arg1;
- (void)_setFilteredMessages:(id)arg1 changedMessages:(id)arg2 filteredThreads:(id)arg3 changedThreads:(id)arg4 changedFlags:(id)arg5 messagesFilteredIn:(id)arg6 messagesFilteredOut:(id)arg7 sortValues:(id)arg8 forSeriesID:(int)arg9 updateImmediately:(BOOL)arg10;
- (void)closeAllThreads;
- (void)openAllThreads;
- (BOOL)openThreadsWithIDs:(id)arg1;
- (id)quietlyCloseThreadAtIndex:(unsigned long long)arg1;
- (BOOL)closeThreadAtIndex:(long long)arg1 focusRow:(long long)arg2 animate:(BOOL)arg3;
- (id)quietlyOpenThreadAtIndex:(unsigned long long)arg1;
- (BOOL)openThreadAtIndex:(long long)arg1 andSelectMessage:(id)arg2 animate:(BOOL)arg3;
- (void)prepareToDisplayThread:(id)arg1;
- (id)_backgroundUngroupThreads;
- (id)_backgroundGroupMessagesByThread;
- (id)_backgroundResetThreadInfoAndGroupByThread;
- (unsigned int)loadOptions;
- (BOOL)needTo;
- (void)setDisplayingToColumn:(BOOL)arg1;
- (BOOL)displayingToColumn;
- (BOOL)needThreadingInfo;
- (void)toggleThreadedMode;
- (void)setIsInThreadedMode:(BOOL)arg1;
- (BOOL)isInThreadedModeExcludingSearch;
- (BOOL)isInThreadedMode;
- (void)_mergeMessages:(id)arg1 intoMessages:(id)arg2 newThreads:(id *)arg3 changedThreads:(id *)arg4 sortValues:(id)arg5 usingComparator:(id)arg6 concurrent:(void)arg7;
- (id)_updateOriginalsForMessageIDs:(id)arg1;
- (void)_updateCopiesInfoForMessages:(id)arg1;
- (void)_removeThreadedMessagesIn:(id)arg1 from:(id)arg2;
- (id)_backgroundSortNewFilteredMessages:(id)arg1;
- (id)_backgroundMergeMessages:(id)arg1;
- (id)_backgroundRefilterMessages:(id)arg1;
- (void)_insertMembersOfOpenThreads:(id)arg1 usingComparator:(id)arg2;
- (void)_removeMembersOfOpenThreads:(id)arg1;
- (id)_backgroundResortWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2;
- (void)structureWillChange;
- (void)structureWillChangeFromClosingThread:(id)arg1 focusRow:(long long)arg2 animate:(BOOL)arg3;
- (void)structureWillChangeFromOpeningThread:(id)arg1;
- (void)_filterTaskCompleted:(id)arg1 seriesID:(int)arg2;
- (void)_resetFilterQueue;
- (void)_addTaskToFilterQueue:(id)arg1;
- (void)_performFilterTask:(id)arg1 seriesID:(int)arg2;
- (void)_backgroundHandleLibraryConversationsChanged:(id)arg1;
- (void)_libraryConversationsWereChanged:(id)arg1;
- (void)_removeMessages:(id)arg1;
- (void)_libraryMessagesGmailLabelsChanged:(id)arg1;
- (void)_libraryMessagesCompacted:(id)arg1;
- (void)_addedMessagesWithDictionary:(id)arg1 conversationsMembers:(id)arg2 toStore:(id)arg3;
- (void)_backgroundHandleMessagesAdded:(id)arg1;
- (void)_componentStoreMessagesWereAdded:(id)arg1;
- (void)_backgroundHandleStoreFinishedLoading:(id)arg1;
- (void)_componentStoreFinishedLoading:(id)arg1;
- (void)_backgroundHandleMessagesUpdated:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (BOOL)_shouldIncludeConversationMemberMessageInMall:(id)arg1 lastSeenMailboxInfo:(id)arg2;
- (void)reload:(id)arg1;
- (void)_componentStoreStructureChanged:(id)arg1;
- (void)_componentStoreDidOpen:(id)arg1;
- (void)_componentStoreWillOpen:(id)arg1;
- (void)_libraryMessagesFlagsChanged:(id)arg1;
- (id)_knownAndUnknownMessages:(id)arg1 fromMessages:(id)arg2;
- (BOOL)_isKnownMessage:(id)arg1;
- (id)_messagesThatShouldBeDisplayed:(id)arg1;
- (BOOL)_shouldDisplayMessage:(id)arg1 hidingCopies:(BOOL)arg2;
- (BOOL)deletedFlagForMessage:(id)arg1;
- (long long)compareByNumberMessage:(id)arg1 andMessage:(id)arg2 sortedAscending:(BOOL)arg3;
- (BOOL)isStillSearching;
- (id)uniquedString:(id)arg1;
- (void)flushAllCaches;
- (void)invalidateMessage:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2;
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;
- (void)undeleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)saveSnippetsForMessages:(id)arg1;
- (id)snippetsForMessages:(id)arg1;
- (BOOL)supportsSnippets;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)dataForMimePart:(id)arg1;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)fullBodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headersForMessage:(id)arg1;
- (id)mailbox;
- (id)account;
- (id)stores;
@property(readonly) BOOL isReadOnly;
- (id)expandedSelectedMailboxesAllowingSearch;
- (id)expandedSelectedMailboxes;
- (id)selectedMailboxes;
- (id)allMailboxes;
- (BOOL)canRebuild;
- (id)_storesToRebuild;
- (void)doCompact;
- (BOOL)canCompact;
- (void)_removeMessagesFromByStoreTables:(id)arg1;
- (void)updateFilteredListByAddingMessages:(id)arg1 removingMessages:(id)arg2;
- (void)_addMessagesToByStoreTables:(id)arg1;
- (void)_addMessages:(id)arg1 toTablesForStore:(id)arg2;
- (id)threadForMessageID:(id)arg1;
- (void)structureDidChangeWithChangedThreads:(id)arg1;
- (void)structureDidChangeByClosingThread:(id)arg1 focusRow:(long long)arg2 animate:(BOOL)arg3;
- (void)structureDidChangeFromOpeningThread:(id)arg1 andSelectMessage:(id)arg2 animate:(BOOL)arg3;
- (void)structureDidChange;
- (void)rebuildTableOfContentsAsynchronously;
- (id)unhideMessages:(id)arg1;
- (id)hideMessages:(id)arg1;
- (unsigned long long)unreadCount;
- (unsigned long long)totalCount;
- (id)_backgroundInvertFilteredList;
- (void)_invertFilteredList;
- (void)_refilter;
- (void)_resortWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2;
- (BOOL)_filterOutMessagesSynchronously:(id)arg1;
- (void)_filterInMessagesSynchronously:(id)arg1;
- (void)_filterInMessages:(id)arg1;
- (id)_addStore:(id)arg1;
- (void)_removeMessagesInStores:(id)arg1 fromCopiesInfoWithStoreCache:(id)arg2;
- (void)_removeMessagesInStores:(id)arg1 fromMessages:(id)arg2 storeCache:(id)arg3;
- (id)_storeForMailbox:(id)arg1 cache:(id)arg2;
- (void)_setMailboxes:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)_threadsSpanMailboxesChanged:(id)arg1;
- (void)_storeFinishedLoading:(id)arg1;
- (unsigned int)sortingMessageFlagsForMessage:(id)arg1;
- (unsigned int)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3;
- (unsigned long long)sortingSizeForMessage:(id)arg1;
- (unsigned long long)sizeForMessage:(id)arg1;
- (void *)secondarySortFunction;
- (void *)sortFunction;
- (void *)sortFunctionForSortOrder:(id)arg1;
- (BOOL)isSortedByDateReceived;
- (BOOL)isSortedAscending;
- (void)setIncludeDeleted:(BOOL)arg1;
- (BOOL)includeDeleted;
- (void)sortMessages:(id)arg1;
- (id)sortComparatorWithPrimarySortOrder:(SEL)arg1 secondarySortOrder:(id)arg2 sortValues:(id)arg3 context:(id)arg4;
- (id)sortComparatorWithContext:(SEL)arg1 sortValues:(void *)arg2;
- (id)arrayOfSortOrders;
- (id)arrayWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2;
- (id)secondarySortOrder;
- (id)sortOrder;
- (void)setSortOrder:(id)arg1 ascending:(BOOL)arg2;
- (id)smartMailboxMemberMessagesForMessages:(id)arg1;
- (unsigned long long)_focusedMessagesCount;
- (void)_setFocusedMessages:(id)arg1;
- (void)setFocusedMessages:(id)arg1;
- (BOOL)isFocused;
- (void)setFocused:(BOOL)arg1;
- (void)clearFilteredMessagesAndUpdateImmediately:(BOOL)arg1;
- (void)clearFilteredMessages;
- (id)filteredThreads;
- (unsigned long long)indexOfFilteredMessage:(id)arg1;
- (unsigned long long)indexOfFilteredDocument:(id)arg1;
- (id)numberForMessage:(id)arg1;
- (unsigned long long)indexOfMessage:(id)arg1;
- (unsigned long long)_indexOfMessage:(id)arg1 inStore:(id)arg2 messages:(id)arg3;
- (id)_sortedMessagesForStore:(id)arg1;
- (BOOL)useLibraryIDNumbering;
- (void)setUseLibraryIDNumbering:(BOOL)arg1;
- (BOOL)selectionIncludesSmartMailbox;
- (unsigned long long)indexOfMessageByLibraryID:(id)arg1;
- (void)setSortedFilteredMessages:(id)arg1;
- (id)filteredMessageAtIndex:(unsigned long long)arg1 isChildOfThread:(char *)arg2;
- (id)filteredMessagesInRange:(struct _NSRange)arg1;
- (id)filteredMessages;
- (id)filteredMessagesAtIndexes:(id)arg1;
- (id)filteredMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)filteredMessagesCount;
- (void)_updateFilteredListIncludesAllMessages;
- (BOOL)isOpened;
- (BOOL)supportsSearching;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearSearch;
- (void)_cancelStoreQueries:(id)arg1;
- (void)dealloc;
- (void)unregisterForNotifications;
- (id)init;

@end

