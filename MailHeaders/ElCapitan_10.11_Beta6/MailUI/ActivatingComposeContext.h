/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "InteractiveComposeContext.h"

@class NSRunningApplication;

@interface ActivatingComposeContext : InteractiveComposeContext
{
    NSRunningApplication *_restoreToApplication;
}

@property(readonly, nonatomic) NSRunningApplication *restoreToApplication; // @synthesize restoreToApplication=_restoreToApplication;
- (void).cxx_destruct;
- (void)controllerWillClose:(id)arg1;
- (void)loadCompleted:(id)arg1;
- (BOOL)shouldTransientlyActivateApplication;
- (id)_currentActiveApplication;
- (id)initWithType:(long long)arg1 targetMessages:(id)arg2;

@end

