/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MUIWebDocumentView, NSArray, NSAttributedString;

@interface MUIMIMEDocumentGenerator : NSObject
{
    NSArray *_mimeParts;
    NSAttributedString *_plainTextAlternative;
    MUIWebDocumentView *_webDocumentView;
}

@property(retain, nonatomic) MUIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSAttributedString *plainTextAlternative; // @synthesize plainTextAlternative=_plainTextAlternative;
@property(retain, nonatomic) NSArray *mimeParts; // @synthesize mimeParts=_mimeParts;
- (void).cxx_destruct;
- (void)asyncGenerateHTMLDocument:(id)arg1;
- (id)init;
- (id)initWithWebDocument:(id)arg1;
- (id)initWithWebDocumentView:(id)arg1;

@end

