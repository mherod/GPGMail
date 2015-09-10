/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMachPortDelegate.h"

@class MCError, NSArray, NSInvocation, NSMachPort, NSMutableSet, NSString;

@interface MCActivityMonitor : NSObject <NSMachPortDelegate>
{
    NSString *_taskName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    NSMutableSet *_subMonitors;
    NSMachPort *_cancelPort;
    id _delegate;
    id <MCActivityTarget> _target;
    double _doneValue;
    double _previousDoneness;
    double _itemValue;
    double _itemMaxValue;
    double _startTime;
    double _itemLastNotifiedTime;
    double _percentDone;
    long long _shouldUnifyDoneness;
    long long _currentProgressStage;
    long long _numberOfProgressStages;
    long long _key;
    unsigned long long _itemsDone;
    unsigned long long _itemsTotal;
    unsigned long long _itemFudgeFactor;
    int _changeCount;
    long long _activityType;
    BOOL _canCancel;
    BOOL _shouldCancel;
    BOOL _isActive;
    BOOL _isProgressing;
    unsigned char _priority;
    BOOL _shouldPromptUserOnTermination;
    NSInvocation *_cancelInvocation;
    NSString *_itemDescription;
    double _itemMinValue;
    MCError *_error;
}

+ (BOOL)automaticallyNotifiesObserversOfIsProgressing;
+ (id)currentMonitor;
+ (id)currentMonitorIfExists;
+ (void)setCurrentMonitor:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfCanBeCancelled;
+ (BOOL)automaticallyNotifiesObserversOfPercentDone;
+ (BOOL)automaticallyNotifiesObserversOfStatusMessage;
+ (double)determinateProgress;
@property BOOL shouldPromptUserOnTermination; // @synthesize shouldPromptUserOnTermination=_shouldPromptUserOnTermination;
@property(retain) MCError *error; // @synthesize error=_error;
@property(nonatomic) double itemMinValue; // @synthesize itemMinValue=_itemMinValue;
@property(copy) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property(retain) NSInvocation *cancelInvocation; // @synthesize cancelInvocation=_cancelInvocation;
- (void).cxx_destruct;
- (void)resetActivityType;
- (void)markCompleted:(BOOL)arg1;
- (void)incrementItemsTotal:(unsigned long long)arg1;
- (void)incrementItemsDone:(unsigned long long)arg1;
- (void)incrementItemValue:(double)arg1;
@property(nonatomic) unsigned long long itemsTotal;
@property(nonatomic) unsigned long long itemsDone;
@property(nonatomic) double itemValue;
- (void)resetItemValue;
- (void)setItem:(id)arg1;
- (void)setItemIndeterminateValue;
@property(nonatomic) double itemMaxValue;
@property(nonatomic) BOOL isProgressing;
- (void)setItemFudgeFactor:(unsigned long long)arg1;
@property long long activityType;
@property(nonatomic) double doneValue;
- (void)updateDoneValue;
@property(copy) NSMachPort *cancelPort;
- (void)setPercentDone:(double)arg1 withKey:(long long)arg2;
- (void)setStatusMessage:(id)arg1 withKey:(long long)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(long long)arg3;
- (void)relinquishExclusiveAccessKey:(long long)arg1;
- (long long)acquireExclusiveAccessKey;
- (void)cancel;
- (void)removeSubMonitor:(id)arg1;
- (void)addSubMonitor:(id)arg1;
@property(nonatomic) BOOL shouldCancel;
@property(nonatomic) BOOL canBeCancelled;
@property(readonly, copy, nonatomic) NSArray *activityTargets;
- (void)setPrimaryTarget:(id)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)addActivityTarget:(id)arg1;
@property(retain) id <MCActivityTarget> activityTarget;
@property(copy) NSString *taskName;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *taskDescriptionString;
- (id)activityDescription;
- (void)beginProgressFor:(long long)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
@property double percentDone;
@property(copy) NSString *statusMessage;
@property(readonly, nonatomic) int changeCount;
- (void)_didChange;
- (void)postActivityFinished;
- (void)handlePortMessage:(id)arg1;
- (void)postActivityStarting;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) BOOL isActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

