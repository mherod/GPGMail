/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCCIDURLProtocolDataProvider.h"
#import "NSCopying.h"

@class DOMHTMLObjectElement, MCAttachment, NSArray, NSData, NSImage, NSItemProvider, NSMutableArray, NSString, NSURL;

@interface MFAttachmentViewController : NSObject <MCCIDURLProtocolDataProvider, NSCopying>
{
    NSMutableArray *_attachmentViews;
    BOOL _canBeDisplayedInline;
    NSImage *_inlineImage;
    BOOL _isBeingDisplayedInline;
    BOOL _isInvisible;
    BOOL _canBeDisplayedInRegisteredViewer;
    BOOL _originalImageSizeHasBeenComputed;
    BOOL _isImageBeingResized;
    MCAttachment *_attachment;
    long long _domNodeWidth;
    long long _domNodeHeight;
    DOMHTMLObjectElement *_objectElement;
    struct CGSize _targetImageSize;
    struct CGSize _originalImageSize;
    struct CGSize _previousTargetImageSize;
}

+ (Class)_viewProviderClassForMimeType:(id)arg1;
+ (void)registerViewingClass:(Class)arg1 forMimeTypes:(id)arg2;
+ (void)initialize;
@property(nonatomic) BOOL isImageBeingResized; // @synthesize isImageBeingResized=_isImageBeingResized;
@property(nonatomic) struct CGSize previousTargetImageSize; // @synthesize previousTargetImageSize=_previousTargetImageSize;
@property(nonatomic) BOOL originalImageSizeHasBeenComputed; // @synthesize originalImageSizeHasBeenComputed=_originalImageSizeHasBeenComputed;
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
@property(nonatomic) BOOL canBeDisplayedInRegisteredViewer; // @synthesize canBeDisplayedInRegisteredViewer=_canBeDisplayedInRegisteredViewer;
@property(retain, nonatomic) DOMHTMLObjectElement *objectElement; // @synthesize objectElement=_objectElement;
@property(nonatomic) struct CGSize targetImageSize; // @synthesize targetImageSize=_targetImageSize;
@property(nonatomic) long long domNodeHeight; // @synthesize domNodeHeight=_domNodeHeight;
@property(nonatomic) long long domNodeWidth; // @synthesize domNodeWidth=_domNodeWidth;
@property(readonly, nonatomic) MCAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
@property(readonly, copy) NSString *mimeType;
@property(readonly) NSURL *cidURL;
@property(readonly, copy) NSData *data;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, copy) NSString *description;
- (void)_attachmentDidFinishReading:(id)arg1;
- (void)_imageDataDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSImage *iconImage;
@property(readonly, copy, nonatomic) NSImage *inlineImage;
- (void)resizingFinished:(id)arg1 imageSize:(struct CGSize)arg2 fileExtension:(id)arg3 fileType:(unsigned int)arg4 maxImageSize:(struct CGSize)arg5;
- (void)resizingStarted:(struct CGSize)arg1;
- (struct CGSize)originalImageSizeWithOriginalImage:(id)arg1;
- (void)setInvisible:(BOOL)arg1;
@property(readonly, nonatomic) BOOL shouldDownloadAttachmentOnDisplay;
@property(readonly, nonatomic) BOOL shouldBeDisplayedInlineByDefault;
@property(nonatomic) BOOL canBeDisplayedInline;
@property(nonatomic) BOOL isBeingDisplayedInline;
- (void)addAttachmentView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *attachmentViews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

