/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountInfoTabOwner.h"

@class MFSizeEngine, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTimer, NSView;

@interface Quota : NSObject <AccountInfoTabOwner>
{
    NSView *_view;
    NSTableView *_quotaTable;
    NSTextField *_usageField;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressField;
    MFSizeEngine *_sizeEngine;
    id _compareUsingDescriptors;
    NSTimer *_statusTimer;
}

+ (id)quotaForMailAccount:(id)arg1;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(readonly, copy, nonatomic) id compareUsingDescriptors; // @synthesize compareUsingDescriptors=_compareUsingDescriptors;
@property(retain, nonatomic) MFSizeEngine *sizeEngine; // @synthesize sizeEngine=_sizeEngine;
@property(nonatomic) __weak NSTextField *progressField; // @synthesize progressField=_progressField;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak NSTextField *usageField; // @synthesize usageField=_usageField;
@property(nonatomic) __weak NSTableView *quotaTable; // @synthesize quotaTable=_quotaTable;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)accountInfoWillShowView:(id)arg1;
- (void)accountInfoWillHideView:(id)arg1;
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSortDescriptors;
- (void)engineUpdated:(id)arg1;
- (void)_stopProgress:(id)arg1;
- (void)_updateProgress:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)engineDidFinish;
- (void)engineDidStart;
- (void)_accountOfflineStatusDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSizeEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

