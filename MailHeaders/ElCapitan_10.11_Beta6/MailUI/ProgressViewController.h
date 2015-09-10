/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

@class MCProgressEntry, NSProgressIndicator, NSString;

@interface ProgressViewController : NSViewController
{
    NSProgressIndicator *_progressIndicator;
}

+ (id)keyPathsForValuesAffectingSecondaryText;
+ (id)keyPathsForValuesAffectingShouldShowOverrideButton;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *secondaryText;
@property(readonly, nonatomic) BOOL shouldShowOverrideButton;
- (void)_transitionToEntry:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) MCProgressEntry *representedObject;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_progressViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

