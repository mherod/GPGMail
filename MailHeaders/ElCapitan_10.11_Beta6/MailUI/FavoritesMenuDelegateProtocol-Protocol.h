/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol FavoritesMenuDelegateProtocol <NSObject>

@optional
@property(readonly, nonatomic) id <MFUIMailbox> selectedMailbox;
- (void)menuDidClose;
- (void)menuDidPresent;
- (void)menuDidSelectMailbox:(id)arg1;
@end

