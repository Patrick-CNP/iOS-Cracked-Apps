//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSFeedbackPostViewBase.h"

#import "SSFeedbackManagerDelegate.h"
#import "SSUploadImageManagerDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDate, NSString, NSURL, SSFeedbackManager, SSUploadImageManager, UIImage;

@interface SSFeedbackPostView : SSFeedbackPostViewBase <SSUploadImageManagerDelegate, UIAlertViewDelegate, SSFeedbackManagerDelegate>
{
    _Bool _sending;
    UIImage *_editedImg;
    SSUploadImageManager *_uploadImageManager;
    SSFeedbackManager *_feedbackManager;
    NSString *_editedImgWebURI;
    NSString *_editedImgUniqueKey;
    NSURL *_editedImgReferenceURL;
    NSDate *_editedImgCreateDate;
}

@property(nonatomic) _Bool sending; // @synthesize sending=_sending;
@property(retain, nonatomic) NSDate *editedImgCreateDate; // @synthesize editedImgCreateDate=_editedImgCreateDate;
@property(retain, nonatomic) NSURL *editedImgReferenceURL; // @synthesize editedImgReferenceURL=_editedImgReferenceURL;
@property(retain, nonatomic) NSString *editedImgUniqueKey; // @synthesize editedImgUniqueKey=_editedImgUniqueKey;
@property(retain, nonatomic) NSString *editedImgWebURI; // @synthesize editedImgWebURI=_editedImgWebURI;
@property(retain, nonatomic) SSFeedbackManager *feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(retain, nonatomic) SSUploadImageManager *uploadImageManager; // @synthesize uploadImageManager=_uploadImageManager;
@property(retain, nonatomic) UIImage *editedImg; // @synthesize editedImg=_editedImg;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)feedbackManager:(id)arg1 postMsgUserInfo:(id)arg2 error:(id)arg3;
- (_Bool)hasPickedImg;
- (void)pickedImage:(id)arg1 withReferenceURL:(id)arg2;
- (void)showRepostAlert:(id)arg1;
- (void)deletePickedImg;
- (void)willDisappear;
- (void)send;
- (void)existView;
- (void)quiteFeedbackPostView;
- (_Bool)needSave;
- (void)saveNeedPostData;
- (void)clearNeedPostData;
- (_Bool)needPostEditImg;
- (void)postMsg;
- (void)postEditImgIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
