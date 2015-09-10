/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCAttachment.h"

#import "MCActivityTarget.h"

@class NSString;

@interface MCAttachment (ScriptingSupport) <MCActivityTarget>
- (void)_finishSaveAttachmentCommand:(id)arg1;
- (void)_fetchDataForCommand:(id)arg1;
- (id)objectSpecifier;
- (id)uniqueID;
- (id)appleScriptApproximateSize;
- (id)handleSaveAttachmentCommand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;
@end

