//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface FMCheckBoxView : UIView
{
    UIImageView *_boxImageView;
    UILabel *_textLabel;
    _Bool withoutText;
    _Bool _isHighlight;
    NSString *_text;
    CDUnknownBlockType _checkBoxChangedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType checkBoxChangedBlock; // @synthesize checkBoxChangedBlock=_checkBoxChangedBlock;
@property(nonatomic) _Bool isHighlight; // @synthesize isHighlight=_isHighlight;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)checkBoxChanged:(CDUnknownBlockType)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 NoText:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

