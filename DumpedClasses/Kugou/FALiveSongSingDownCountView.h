//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

@class NSTimer, UILabel;

@interface FALiveSongSingDownCountView : FAView
{
    id <FALiveSongSingDownCountViewDelegate> _delegate;
    UILabel *_songDownCountTipView;
    NSTimer *_downCountTimer;
}

@property(retain, nonatomic) NSTimer *downCountTimer; // @synthesize downCountTimer=_downCountTimer;
@property(retain, nonatomic) UILabel *songDownCountTipView; // @synthesize songDownCountTipView=_songDownCountTipView;
@property(nonatomic) __weak id <FALiveSongSingDownCountViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetData;
- (id)getTipAttributedStrWithDownCountSecond:(long long)arg1 songName:(id)arg2;
- (void)reloadViewWithDownCountSecond:(long long)arg1 songName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

