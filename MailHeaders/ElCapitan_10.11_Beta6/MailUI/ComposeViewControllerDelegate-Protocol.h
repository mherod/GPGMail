/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol ComposeViewControllerDelegate <NSObject>
- (id)animationContentProvider:(id)arg1;
- (void)synchronizeIncludeAttachmentsToolbarItem:(id)arg1;
- (void)synchronizeToolbarReplyWithType:(long long)arg1;
- (void)composeViewControllerDidFinishLoading:(id)arg1;
- (void)composeViewControllerShouldShow:(id)arg1;
- (void)composeViewControllerShouldClose:(id)arg1;
- (void)composeViewControllerDidSend:(id)arg1;
- (void)updateSendButtonStateInToolbar;
- (void)showSheetForAlert:(id)arg1 completion:(id)arg2;
@end

