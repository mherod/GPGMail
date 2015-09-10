/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

#import "ImageResizerDelegate.h"
#import "MCActivityTarget.h"
#import "NSSharingServiceDelegate.h"
#import "NSTextFinderClient.h"
#import "NSUserInterfaceValidations.h"
#import "PopoutAnimationContentProvider.h"
#import "TerminationHandler.h"

@class ColorBackgroundView, ComposeBackEnd, ComposeStatusView, DeliveryFailure, EditingMessageWebView, EditingWebMessageController, HeadersEditor, LoadingOverlay, MCAttachment, NSArray, NSButton, NSDictionary, NSMutableArray, NSMutableDictionary, NSOperation, NSOperationQueue, NSStackView, NSString, NSTextField, NSTextFinder, NSView, NSView<NSTextFinderBarContainer>, NSWindow, StationerySelector, WebArchive, WebViewEditor, _ControllerTitleTransformer;

@interface ComposeViewController : NSViewController <ImageResizerDelegate, MCActivityTarget, NSTextFinderClient, NSSharingServiceDelegate, NSUserInterfaceValidations, PopoutAnimationContentProvider, TerminationHandler>
{
    NSMutableArray *_imageResizers;
    NSMutableDictionary *_bodiesByAttachmentURL;
    ComposeBackEnd *_backEnd;
    BOOL _sendWhenFinishLoading;
    BOOL _isShareKitOriginated;
    BOOL _wantsToClose;
    BOOL _isFinishedLoading;
    BOOL _shouldSaveWhenClosing;
    BOOL _userSavedMessage;
    BOOL _isAutoSaving;
    BOOL _hasIncludedAttachmentsFromOriginal;
    BOOL _hasUserMadeChanges;
    BOOL _userKnowsSaveFailed;
    ComposeStatusView *_composeStatusView;
    EditingMessageWebView *_composeWebView;
    NSStackView *_contentStack;
    WebViewEditor *_webViewEditor;
    HeadersEditor *_headersEditor;
    unsigned long long _textLengthForLastEstimatedMessageSize;
    NSOperation *_savedFinishLoadingEditorOperation;
    NSDictionary *_settings;
    NSOperationQueue *_operationQueue;
    long long _messageType;
    NSDictionary *_toolbarItems;
    NSView *_statusRow;
    EditingWebMessageController *_webMessageController;
    id <ComposeViewControllerDelegate> _delegate;
    _ControllerTitleTransformer *_titleTransformer;
    DeliveryFailure *_deliveryFailure;
    NSArray *_unapprovedRecipients;
    NSString *_URLShareUUID;
    WebArchive *_pageWebArchive;
    WebArchive *_readerWebArchive;
    MCAttachment *_PDFAttachment;
    LoadingOverlay *_loadingOverlay;
    NSString *_userHTMLForSharingTop;
    NSTextFinder *_textFinder;
    NSView<NSTextFinderBarContainer> *_findBarContainer;
    StationerySelector *_stationerySelector;
    ColorBackgroundView *_stationeryPane;
    NSButton *_stationeryNameSaveButton;
    NSTextField *_stationeryNameTextField;
    NSView *_clippingView;
}

+ (void)_setMessageStatus:(id)arg1 onMessageID:(id)arg2;
+ (id)documentWebPreferencesIdentifierForRichText:(BOOL)arg1;
+ (id)keyPathsForValuesAffectingDeliveryAccount;
+ (void)warmUpComposeNib;
@property(nonatomic) BOOL userKnowsSaveFailed; // @synthesize userKnowsSaveFailed=_userKnowsSaveFailed;
@property(nonatomic) BOOL hasUserMadeChanges; // @synthesize hasUserMadeChanges=_hasUserMadeChanges;
@property(retain, nonatomic) NSView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak NSTextField *stationeryNameTextField; // @synthesize stationeryNameTextField=_stationeryNameTextField;
@property(nonatomic) __weak NSButton *stationeryNameSaveButton; // @synthesize stationeryNameSaveButton=_stationeryNameSaveButton;
@property(retain, nonatomic) ColorBackgroundView *stationeryPane; // @synthesize stationeryPane=_stationeryPane;
@property(retain, nonatomic) StationerySelector *stationerySelector; // @synthesize stationerySelector=_stationerySelector;
@property(nonatomic) BOOL hasIncludedAttachmentsFromOriginal; // @synthesize hasIncludedAttachmentsFromOriginal=_hasIncludedAttachmentsFromOriginal;
@property(nonatomic) __weak NSView<NSTextFinderBarContainer> *findBarContainer; // @synthesize findBarContainer=_findBarContainer;
@property(retain, nonatomic) NSTextFinder *textFinder; // @synthesize textFinder=_textFinder;
@property(retain, nonatomic) NSString *userHTMLForSharingTop; // @synthesize userHTMLForSharingTop=_userHTMLForSharingTop;
@property(retain, nonatomic) LoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) MCAttachment *PDFAttachment; // @synthesize PDFAttachment=_PDFAttachment;
@property(retain, nonatomic) WebArchive *readerWebArchive; // @synthesize readerWebArchive=_readerWebArchive;
@property(retain, nonatomic) WebArchive *pageWebArchive; // @synthesize pageWebArchive=_pageWebArchive;
@property(retain, nonatomic) NSString *URLShareUUID; // @synthesize URLShareUUID=_URLShareUUID;
@property(nonatomic) BOOL isAutoSaving; // @synthesize isAutoSaving=_isAutoSaving;
@property(nonatomic) BOOL userSavedMessage; // @synthesize userSavedMessage=_userSavedMessage;
@property(nonatomic) BOOL shouldSaveWhenClosing; // @synthesize shouldSaveWhenClosing=_shouldSaveWhenClosing;
@property(nonatomic) BOOL isFinishedLoading; // @synthesize isFinishedLoading=_isFinishedLoading;
@property(nonatomic) BOOL wantsToClose; // @synthesize wantsToClose=_wantsToClose;
@property(copy, nonatomic) NSArray *unapprovedRecipients; // @synthesize unapprovedRecipients=_unapprovedRecipients;
@property(nonatomic) BOOL isShareKitOriginated; // @synthesize isShareKitOriginated=_isShareKitOriginated;
@property(nonatomic) BOOL sendWhenFinishLoading; // @synthesize sendWhenFinishLoading=_sendWhenFinishLoading;
@property(retain, nonatomic) DeliveryFailure *deliveryFailure; // @synthesize deliveryFailure=_deliveryFailure;
@property(readonly, nonatomic) _ControllerTitleTransformer *titleTransformer; // @synthesize titleTransformer=_titleTransformer;
@property(nonatomic) __weak id <ComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EditingWebMessageController *webMessageController; // @synthesize webMessageController=_webMessageController;
@property(nonatomic) __weak NSView *statusRow; // @synthesize statusRow=_statusRow;
@property(copy, nonatomic) NSDictionary *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak NSOperation *savedFinishLoadingEditorOperation; // @synthesize savedFinishLoadingEditorOperation=_savedFinishLoadingEditorOperation;
@property(nonatomic) unsigned long long textLengthForLastEstimatedMessageSize; // @synthesize textLengthForLastEstimatedMessageSize=_textLengthForLastEstimatedMessageSize;
@property(retain, nonatomic) HeadersEditor *headersEditor; // @synthesize headersEditor=_headersEditor;
@property(retain, nonatomic) WebViewEditor *webViewEditor; // @synthesize webViewEditor=_webViewEditor;
@property(nonatomic) __weak NSStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(retain, nonatomic) EditingMessageWebView *composeWebView; // @synthesize composeWebView=_composeWebView;
@property(retain, nonatomic) ComposeStatusView *composeStatusView; // @synthesize composeStatusView=_composeStatusView;
- (void).cxx_destruct;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_bodySnapshot;
- (struct CGRect)_composeFrame;
- (struct CGRect)_headerFrame;
- (id)getContentGeometryData;
- (void)getSnapshotParts:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)changeReplyMode:(id)arg1;
- (void)saveSaveAsStationery:(id)arg1;
- (void)cancelSaveAsStationery:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)saveAsStationery:(id)arg1;
- (void)loadStationery:(id)arg1;
- (id)currentStationery;
- (BOOL)stationeryPaneIsVisible;
- (void)_animateStationerySelector:(BOOL)arg1;
- (void)showOrHideStationery:(id)arg1;
- (double)_animationDuration;
- (BOOL)_restoreOriginalAttachments;
- (void)insertOriginalAttachments:(id)arg1;
@property(readonly, getter=isEditable) BOOL editable;
- (void)didFindNonIncrementalSearchInWebView:(id)arg1 DOMRange:(id)arg2;
- (id)currentlySelectedWebView;
- (id)webViews;
- (void)performTextFinderAction:(id)arg1;
- (void)forceClose;
- (void)show;
@property(readonly, nonatomic) NSWindow *window;
- (void)_addAttachmentsFromShareKit;
- (BOOL)_isReplyingFromShareKitWithFileAttachments;
- (id)_parsedMessageFromShareDictionary:(id)arg1;
- (void)_showURLPicker;
- (void)_setupDefaultURLState;
- (BOOL)_needsURLPicker;
- (void)_showURLPickerIfNeeded;
- (void)_validateURLPicker;
- (void)_insertUserHTMLDivs;
- (void)_getUserHTMLForEditing;
- (void)_addBaseURLToDocumentIfNeeded;
- (id)_newOriginalSharingSourceURLHTMLString;
- (void)_changeSharedURLToDisplayType:(long long)arg1;
- (void)refreshShareContentsForDisplayType:(long long)arg1;
- (void)URLPickerPopupChanged:(id)arg1;
- (void)setMessagePriority:(id)arg1;
- (void)useInspectorBar:(id)arg1;
- (void)toggleRich:(id)arg1;
- (void)makePlainText:(id)arg1;
- (void)makeRichText:(id)arg1;
- (void)_generateParsedMessagesToAppendForMessages:(id)arg1;
- (void)_appendMessages:(id)arg1 withParsedMessages:(id)arg2;
- (void)appendMessageArray:(id)arg1;
- (void)appendMessages:(id)arg1;
- (void)toggleCheckGrammarWithSpelling:(id)arg1;
- (void)changeSpellCheckingBehavior:(id)arg1;
- (void)_printAsExportJob:(BOOL)arg1;
- (void)exportAsPDF:(id)arg1;
- (void)showPrintPanel:(id)arg1;
- (void)setInitialFirstResponder;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)viewWillClose;
- (BOOL)canSave;
@property(readonly, nonatomic) BOOL hasChanges;
- (void)saveDocument:(id)arg1;
- (void)saveMessageToDrafts:(id)arg1;
- (void)_setUserSavedMessageAndPostNotification:(BOOL)arg1;
- (void)canClose:(id)arg1;
- (void)_saveMessageDueToUserAction:(BOOL)arg1;
- (void)autoSave;
- (void)backEndHandedMessageToDevice:(id)arg1;
- (void)setInsertionPointAtEnd;
- (void)activityContinuationFailed;
- (void)_setMessageStatusOnOriginalMessage;
- (void)backEndDidAppendMessageToOutbox:(id)arg1 result:(long long)arg2;
- (void)backEndDidChange:(id)arg1;
- (void)backEnd:(id)arg1 willCreateMessageWithHeaders:(id)arg2;
- (void)_showMailDropAlert:(id)arg1 forMultipleAttachments:(BOOL)arg2;
@property(readonly, nonatomic) BOOL canSendViaMailDrop;
- (void)encryptionStatusDidChange;
- (id)_newFailedToCreateMessageAlert;
- (id)_newSaveFailureAlert;
- (id)_newAppendToOutboxFailedAlert;
- (id)_newCannotSaveToOutboxAlert;
- (id)_newShouldSaveAlert;
- (id)_newAlertForMalformedAddress:(id)arg1;
- (id)_newNoRecipientsAlert;
- (id)_newEmptyMessageAlert;
- (id)_newPendingAttachmentAlert;
- (void)sendMessageAfterChecking:(id)arg1;
- (void)reportDeliveryFailure:(id)arg1;
- (void)send:(id)arg1;
- (BOOL)_sendButtonShouldBeEnabled;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_firstSelectedAttachmentView;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)editVisibleHeaders:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)updateSendButtonStateInToolbar;
- (void)editSignatures:(id)arg1;
- (void)changeSignature:(id)arg1;
- (id)shareItemsForSelection;
- (void)invokeExtensionService:(id)arg1;
- (BOOL)_supportsStationery;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)parsedMessageFromSettings:(id)arg1;
- (void)prepareContent;
- (void)_setupGrammarChecking;
- (void)_setupSpellChecking;
- (id)missingCertificatesMessageForRecipients:(id)arg1 uponDelivery:(BOOL)arg2;
- (void)backEndSenderDidChange:(id)arg1;
- (void)backEndDidLoadInitialContent:(id)arg1;
- (void)backEndDidSaveMessage:(id)arg1 result:(long long)arg2;
- (void)continueLoadingInitialContent;
- (void)finishLoadingEditor;
- (void)loadInitialDocumentIntoWebView:(id)arg1;
- (id)_finishLoadingEditorOperation;
- (id)_loadInitialDocumentOperation;
- (id)_prepareContentOperation;
- (BOOL)_loadContent;
@property(readonly, nonatomic) BOOL shouldDoPopOutAnimation;
- (BOOL)_attachmentCanBeResized:(id)arg1;
- (BOOL)_resizeImageAttachments:(id)arg1;
- (BOOL)_resizeAttachment:(id)arg1;
- (id)_resizerForAttachment:(id)arg1;
- (void)imageResizer:(id)arg1 didFinishResizingWithResultCode:(long long)arg2;
- (id)_maxImageSizeAsString;
- (struct CGSize)_selectedImageSize;
- (struct CGSize)_imageSizeForTag:(long long)arg1;
- (void)_hideImageStatus;
- (void)messageSizeDidChange:(id)arg1;
- (void)_saveImageSizeToDefaults;
- (void)imageSizePopupChanged:(id)arg1;
@property(readonly, nonatomic) BOOL hasPendingAttachmentReads;
- (void)_setImageSizePopupToSize:(id)arg1;
- (void)_showImageStatus;
- (void)_updateImageSizePopup;
- (unsigned long long)_attachmentsContainScalableImage:(id)arg1 scalables:(id)arg2;
- (unsigned long long)_isAttachmentScalable:(id)arg1;
- (id)mailAttachmentsAdded:(id)arg1;
- (void)_attachmentDidFinishReading:(id)arg1;
- (void)mailAttachmentsDeleted:(id)arg1;
- (void)_mailAttachmentsDeleted;
@property(readonly, nonatomic) unsigned long long encryptionOverhead;
- (unsigned long long)_signatureOverhead;
- (unsigned long long)_textLengthEstimate;
- (unsigned long long)estimatedMessageSize;
- (BOOL)_isResizingImages;
- (void)webViewDidChange:(id)arg1;
- (void)updateAttachmentStatus;
- (void)attachFilesAtEnd:(id)arg1;
- (void)alwaysAttachFilesAtEnd:(id)arg1;
- (void)_setSendWindowsFriendlyAttachments:(BOOL)arg1;
- (void)sendWindowsFriendlyAttachments:(id)arg1;
- (void)insertFile:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (id)deliveryAccount;
- (id)webMessageDocument;
- (void)_hideStatusBar;
- (void)_showStatusBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)type;
@property(retain, nonatomic) ComposeBackEnd *backEnd;
- (void)viewDidLoad;
- (void)showWithContext:(id)arg1;
@property(retain) id <ComposeContext> representedObject;
- (void)dealloc;
- (id)initWithBackEnd:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly, getter=isSelectable) BOOL selectable;
@property(copy) NSArray *selectedRanges;
@property(readonly) NSString *string;
@property(readonly) Class superclass;
@property(readonly, copy) NSArray *visibleCharacterRanges;

@end

