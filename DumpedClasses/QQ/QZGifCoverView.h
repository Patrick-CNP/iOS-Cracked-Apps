//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseCoverView.h"

#import "QZAutoPlayGifViewDelegate.h"

@class NSString, QZAutoPlayGifView, UIButton, UIImageView;

@interface QZGifCoverView : QZBaseCoverView <QZAutoPlayGifViewDelegate>
{
    UIImageView *_bgImageView;
    QZAutoPlayGifView *_gifView;
    UIButton *_playButton;
}

- (void).cxx_destruct;
- (void)onNetReachabilityDidChange;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)willDisappear;
- (void)willAppear;
- (void)scrollToTop;
- (void)didEndDragging;
- (void)willBeginDragging;
- (_Bool)shouldShowLoading;
- (_Bool)canPlayGif;
- (_Bool)checkViewInWindow;
- (void)requestFinished:(id)arg1;
- (void)gifDownloadSuccess:(id)arg1;
- (void)clickPlayButton;
- (void)updateCover:(id)arg1;
- (void)initGifView;
- (void)initBgImageView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

