//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSCustomActionCell.h"

@class CTVectorImageView, NSLayoutConstraint, TrainCardInformationModel, UIButton, UILabel, UIView;

@interface CTSTrainCell : CTSCustomActionCell
{
    UIView *_realContentView;
    UILabel *_departStationLabel;
    UILabel *_arriveStationLabel;
    UILabel *_departCityLabel;
    UILabel *_arriveCityLabel;
    UILabel *_departTimeLabel;
    UILabel *_arriveTimeLabel;
    UILabel *_statusLabel;
    UILabel *_numberOfDays;
    UILabel *_trainNumLabel;
    UILabel *_startDateLabel;
    CTVectorImageView *_trainIconImageView;
    CTVectorImageView *_statusImageView;
    UIButton *_orderServiceButton;
    UIView *_statusBgView;
    TrainCardInformationModel *_trainModel;
    NSLayoutConstraint *_statusViewHeightConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_startDateLabelTopConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *startDateLabelTopConstraint; // @synthesize startDateLabelTopConstraint=_startDateLabelTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak NSLayoutConstraint *statusViewHeightConstraint; // @synthesize statusViewHeightConstraint=_statusViewHeightConstraint;
@property(retain, nonatomic) TrainCardInformationModel *trainModel; // @synthesize trainModel=_trainModel;
@property(nonatomic) __weak UIView *statusBgView; // @synthesize statusBgView=_statusBgView;
@property(nonatomic) __weak UIButton *orderServiceButton; // @synthesize orderServiceButton=_orderServiceButton;
@property(nonatomic) __weak CTVectorImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) __weak CTVectorImageView *trainIconImageView; // @synthesize trainIconImageView=_trainIconImageView;
@property(nonatomic) __weak UILabel *startDateLabel; // @synthesize startDateLabel=_startDateLabel;
@property(nonatomic) __weak UILabel *trainNumLabel; // @synthesize trainNumLabel=_trainNumLabel;
@property(nonatomic) __weak UILabel *numberOfDays; // @synthesize numberOfDays=_numberOfDays;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *arriveTimeLabel; // @synthesize arriveTimeLabel=_arriveTimeLabel;
@property(nonatomic) __weak UILabel *departTimeLabel; // @synthesize departTimeLabel=_departTimeLabel;
@property(nonatomic) __weak UILabel *arriveCityLabel; // @synthesize arriveCityLabel=_arriveCityLabel;
@property(nonatomic) __weak UILabel *departCityLabel; // @synthesize departCityLabel=_departCityLabel;
@property(nonatomic) __weak UILabel *arriveStationLabel; // @synthesize arriveStationLabel=_arriveStationLabel;
@property(nonatomic) __weak UILabel *departStationLabel; // @synthesize departStationLabel=_departStationLabel;
@property(nonatomic) __weak UIView *realContentView; // @synthesize realContentView=_realContentView;
- (void).cxx_destruct;
- (_Bool)needShowStatusView;
- (_Bool)needShowOrderServiceButton;
- (id)numberOfDaysHandler;
- (id)getOperationView;
- (id)getCardStatusLabel;
- (id)getCardStatusImageView;
- (id)ctsOrderServiceButton;
- (id)getTopConstraint;
- (id)customizedContentView;
- (id)startDateString:(id)arg1;
- (void)setCellWithModel:(id)arg1 index:(id)arg2 delegate:(id)arg3;
- (void)showOrderServiceAction:(id)arg1;
- (void)awakeFromNib;

@end

