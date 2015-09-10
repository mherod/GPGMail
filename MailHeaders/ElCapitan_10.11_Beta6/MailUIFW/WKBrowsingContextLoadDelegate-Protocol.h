/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol WKBrowsingContextLoadDelegate <NSObject>

@optional
- (void)browsingContextControllerDidChangeBackForwardList:(id)arg1 addedItem:(id)arg2 removedItems:(id)arg3;
- (void)browsingContextControllerDidFinishProgress:(id)arg1;
- (void)browsingContextController:(id)arg1 estimatedProgressChangedTo:(double)arg2;
- (void)browsingContextControllerDidStartProgress:(id)arg1;
- (void)browsingContextController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)browsingContextControllerDidFinishLoad:(id)arg1;
- (void)browsingContextControllerDidCommitLoad:(id)arg1;
- (void)browsingContextController:(id)arg1 didFailProvisionalLoadWithError:(id)arg2;
- (void)browsingContextControllerDidReceiveServerRedirectForProvisionalLoad:(id)arg1;
- (void)browsingContextControllerDidStartProvisionalLoad:(id)arg1;
@end

