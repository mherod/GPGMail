/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol MFUserAgent <NSObject>
@property(readonly, nonatomic) BOOL isTerminating;
- (void)informUserOfBusyDatabaseWithRecoverer:(id)arg1 diagnosis:(long long *)arg2;
- (void)informUserOfIOErrorWithStateIn:(long long *)arg1;
- (BOOL)openTemporaryAttachments:(id)arg1 applicationBundle:(id)arg2;
- (void)quitAndRelaunchWithAdditionalArguments:(id)arg1;
- (void)storeBeingInvalidated:(id)arg1;
- (long long)queryUserForBigMessageAction:(id)arg1;
- (long long)runAlertPanelWithTitle:(id)arg1 firstButtonTitle:(id)arg2 secondButtonTitle:(id)arg3 thirdButtonTitle:(id)arg4 message:(id)arg5;
- (BOOL)queryUserWithMessageText:(id)arg1 informativeText:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (void)informUserOfError:(id)arg1;
@end

