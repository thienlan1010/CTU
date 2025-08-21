/*==============================================================*/
/* Table: BAO_CAO_TAI_CHINH                                     */
/*==============================================================*/
create table BAO_CAO_TAI_CHINH 
(
   BC_ID                integer                        not null,
   NV_ID                integer                        not null,
   BC_TONGTAISAN        decimal(15)                    not null,
   BC_TONGNOPHAITRA     decimal(15)                    not null,
   BC_TONGSOVON         decimal(15)                    not null,
   BC_TONGDOANHTHU      decimal(15)                    not null,
   BC_NGAYLAP           date                           not null,
   constraint PK_BAO_CAO_TAI_CHINH primary key (BC_ID)
);

/*==============================================================*/
/* Index: BAO_CAO_TAI_CHINH_PK                                  */
/*==============================================================*/
create unique index BAO_CAO_TAI_CHINH_PK on BAO_CAO_TAI_CHINH (
BC_ID ASC
);

/*==============================================================*/
/* Index: NV_LAP_BC_FK                                          */
/*==============================================================*/
create index NV_LAP_BC_FK on BAO_CAO_TAI_CHINH (
NV_ID ASC
);

/*==============================================================*/
/* Table: CONG_NO_THU                                           */
/*==============================================================*/
create table CONG_NO_THU 
(
   CNT_ID               integer                        not null,
   HDB_ID               integer                        not null,
   CNT_SOTIENTHU        decimal(15)                    not null,
   CNT_NGAYPHATSINH     date                           not null,
   CNT_DUKIENTRA        date                           not null,
   CNT_TRANGTHAI        varchar(30)                    not null,
   constraint PK_CONG_NO_THU primary key (CNT_ID)
);

/*==============================================================*/
/* Index: CONG_NO_THU_PK                                        */
/*==============================================================*/
create unique index CONG_NO_THU_PK on CONG_NO_THU (
CNT_ID ASC
);

/*==============================================================*/
/* Index: HDB_CO_CNT_FK                                         */
/*==============================================================*/
create index HDB_CO_CNT_FK on CONG_NO_THU (
HDB_ID ASC
);

/*==============================================================*/
/* Table: CONG_NO_TRA                                           */
/*==============================================================*/
create table CONG_NO_TRA 
(
   CNTR_ID              integer                        not null,
   HDM_ID               integer                        not null,
   CNTR_SOTIENTRA       decimal(15)                    not null,
   CNTR_NGAYPHATSINH    date                           not null,
   CNTR_DUKIEMTRA       date                           not null,
   CNTR_TRANGTHAI       varchar(30)                    not null,
   constraint PK_CONG_NO_TRA primary key (CNTR_ID)
);

/*==============================================================*/
/* Index: CONG_NO_TRA_PK                                        */
/*==============================================================*/
create unique index CONG_NO_TRA_PK on CONG_NO_TRA (
CNTR_ID ASC
);

/*==============================================================*/
/* Index: HDM_CO_CNTR_FK                                        */
/*==============================================================*/
create index HDM_CO_CNTR_FK on CONG_NO_TRA (
HDM_ID ASC
);

/*==============================================================*/
/* Table: HOA_DON_BAN                                           */
/*==============================================================*/
create table HOA_DON_BAN 
(
   HDB_ID               integer                        not null,
   NV_ID                integer                        not null,
   KH_ID                integer                        not null,
   HDB_TONGTIEN         decimal(15)                    not null,
   HDB_DATHANHTOAN      decimal(15)                    not null,
   HDB_LYDOTHU          varchar(100)                   not null,
   HDB_TRANGTHAI        varchar(30)                    not null,
   HDB_MOTA             varchar(100)                   not null,
   HDB_NGAYLAP          date                           not null,
   constraint PK_HOA_DON_BAN primary key (HDB_ID)
);

/*==============================================================*/
/* Index: HOA_DON_BAN_PK                                        */
/*==============================================================*/
create unique index HOA_DON_BAN_PK on HOA_DON_BAN (
HDB_ID ASC
);

/*==============================================================*/
/* Index: KH_HDB_FK                                             */
/*==============================================================*/
create index KH_HDB_FK on HOA_DON_BAN (
KH_ID ASC
);

/*==============================================================*/
/* Index: NV_LAP_HDB_FK                                         */
/*==============================================================*/
create index NV_LAP_HDB_FK on HOA_DON_BAN (
NV_ID ASC
);

/*==============================================================*/
/* Table: HOA_DON_MUA                                           */
/*==============================================================*/
create table HOA_DON_MUA 
(
   HDM_ID               integer                        not null,
   NCC_ID               integer                        not null,
   HDM_TONGTIEN         decimal(15)                    not null,
   HDM_DATHANHTOAN      decimal(15)                    not null,
   HDM_LYDOTHU          varchar(1000)                  not null,
   HDM_TRANGTHAI        varchar(30)                    not null,
   HDM_MOTA             long varchar                   not null,
   HDM_NGAYLAP          date                           not null,
   constraint PK_HOA_DON_MUA primary key (HDM_ID)
);

/*==============================================================*/
/* Index: HOA_DON_MUA_PK                                        */
/*==============================================================*/
create unique index HOA_DON_MUA_PK on HOA_DON_MUA (
HDM_ID ASC
);

/*==============================================================*/
/* Index: NCC_CO_HDM_FK                                         */
/*==============================================================*/
create index NCC_CO_HDM_FK on HOA_DON_MUA (
NCC_ID ASC
);

/*==============================================================*/
/* Table: KHACH_HANG                                            */
/*==============================================================*/
create table KHACH_HANG 
(
   KH_ID                integer                        not null,
   KH_HOTEN             varchar(30)                    not null,
   KH_SDT               varchar(15)                    not null,
   KH_DIACHI            varchar(50)                    not null,
   constraint PK_KHACH_HANG primary key (KH_ID)
);

/*==============================================================*/
/* Index: KHACH_HANG_PK                                         */
/*==============================================================*/
create unique index KHACH_HANG_PK on KHACH_HANG (
KH_ID ASC
);

/*==============================================================*/
/* Table: NHAN_VIEN                                             */
/*==============================================================*/
create table NHAN_VIEN 
(
   NV_ID                integer                        not null,
   NV_HOTEN             varchar(30)                    not null,
   NV_NAMSINH           date                           not null,
   NV_EMAIL             varchar(30)                    not null,
   NV_SDT               varchar(15)                    not null,
   NV_DIACHI            varchar(50)                    not null,
   constraint PK_NHAN_VIEN primary key (NV_ID)
);

/*==============================================================*/
/* Index: NHAN_VIEN_PK                                          */
/*==============================================================*/
create unique index NHAN_VIEN_PK on NHAN_VIEN (
NV_ID ASC
);

/*==============================================================*/
/* Table: NHA_CUNG_CAP                                          */
/*==============================================================*/
create table NHA_CUNG_CAP 
(
   NCC_ID               integer                        not null,
   NCC_TEN              varchar(100)                   not null,
   NCC_EMAIL            varchar(30)                    not null,
   NCC_SDT              varchar(15)                    not null,
   NCC_DIACHI           varchar(50)                    not null,
   NCC_MST              varchar(15)                    not null,
   constraint PK_NHA_CUNG_CAP primary key (NCC_ID)
);

/*==============================================================*/
/* Index: NHA_CUNG_CAP_PK                                       */
/*==============================================================*/
create unique index NHA_CUNG_CAP_PK on NHA_CUNG_CAP (
NCC_ID ASC
);

/*==============================================================*/
/* Table: PHIEU_CHI                                             */
/*==============================================================*/
create table PHIEU_CHI 
(
   PC_ID                integer                        not null,
   HDM_ID               integer                        not null,
   NV_ID                integer                        not null,
   TKKT_ID              integer                        not null,
   PC_NGAYHOACHTOAN     date                           not null,
   PC_NGAYCHUNGTU       date                           not null,
   PC_SOTIEN            decimal(15)                    not null,
   PC_NOIDUNG           long varchar                   not null,
   constraint PK_PHIEU_CHI primary key (PC_ID)
);

/*==============================================================*/
/* Index: PHIEU_CHI_PK                                          */
/*==============================================================*/
create unique index PHIEU_CHI_PK on PHIEU_CHI (
PC_ID ASC
);

/*==============================================================*/
/* Index: PC_HDM_FK                                             */
/*==============================================================*/
create index PC_HDM_FK on PHIEU_CHI (
HDM_ID ASC
);

/*==============================================================*/
/* Index: PC_TKKT_FK                                            */
/*==============================================================*/
create index PC_TKKT_FK on PHIEU_CHI (
TKKT_ID ASC
);

/*==============================================================*/
/* Index: NV_LAP_PC_FK                                          */
/*==============================================================*/
create index NV_LAP_PC_FK on PHIEU_CHI (
NV_ID ASC
);

/*==============================================================*/
/* Table: PHIEU_THU                                             */
/*==============================================================*/
create table PHIEU_THU 
(
   PT_ID                integer                        not null,
   TKKT_ID              integer                        not null,
   NV_ID                integer                        not null,
   HDB_ID               integer                        not null,
   PT_DIACHI            varchar(50)                    not null,
   PT_NGAYHOACHTOAN     date                           not null,
   PT_NGAYCHUNGTU       date                           not null,
   PT_SOTIEN            decimal(15)                    not null,
   constraint PK_PHIEU_THU primary key (PT_ID)
);

/*==============================================================*/
/* Index: PHIEU_THU_PK                                          */
/*==============================================================*/
create unique index PHIEU_THU_PK on PHIEU_THU (
PT_ID ASC
);

/*==============================================================*/
/* Index: PT_HDB_FK                                             */
/*==============================================================*/
create index PT_HDB_FK on PHIEU_THU (
HDB_ID ASC
);

/*==============================================================*/
/* Index: NV_LAP_PT_FK                                          */
/*==============================================================*/
create index NV_LAP_PT_FK on PHIEU_THU (
NV_ID ASC
);

/*==============================================================*/
/* Index: PT_TKKT_FK                                            */
/*==============================================================*/
create index PT_TKKT_FK on PHIEU_THU (
TKKT_ID ASC
);

/*==============================================================*/
/* Table: TAIKHOAN_KETOAN                                       */
/*==============================================================*/
create table TAIKHOAN_KETOAN 
(
   TKKT_ID              integer                        not null,
   TKKT_NO              integer                        not null,
   TKKT_CO              integer                        not null,
   TKKT_DIENGIAI        varchar(100)                   not null,
   constraint PK_TAIKHOAN_KETOAN primary key (TKKT_ID)
);

/*==============================================================*/
/* Index: TAIKHOAN_KETOAN_PK                                    */
/*==============================================================*/
create unique index TAIKHOAN_KETOAN_PK on TAIKHOAN_KETOAN (
TKKT_ID ASC
);

/*==============================================================*/
/* Table: TAI_KHOAN                                             */
/*==============================================================*/
create table TAI_KHOAN 
(
   TK_ID                integer                        not null,
   NV_ID                integer                        not null,
   TK_TENDANGNHAP       varchar(30)                    not null,
   TK_MATKHAU           char(8)                        not null,
   TK_VAITRO            varchar(30)                    not null,
   constraint PK_TAI_KHOAN primary key (TK_ID)
);

/*==============================================================*/
/* Index: TAI_KHOAN_PK                                          */
/*==============================================================*/
create unique index TAI_KHOAN_PK on TAI_KHOAN (
TK_ID ASC
);

/*==============================================================*/
/* Index: TK_KT_FK                                              */
/*==============================================================*/
create index TK_KT_FK on TAI_KHOAN (
NV_ID ASC
);

alter table BAO_CAO_TAI_CHINH
   add constraint FK_BAO_CAO__NV_LAP_BC_NHAN_VIE foreign key (NV_ID)
      references NHAN_VIEN (NV_ID)
      on update restrict
      on delete restrict;

alter table CONG_NO_THU
   add constraint FK_CONG_NO__HDB_CO_CN_HOA_DON_ foreign key (HDB_ID)
      references HOA_DON_BAN (HDB_ID)
      on update restrict
      on delete restrict;

alter table CONG_NO_TRA
   add constraint FK_CONG_NO__HDM_CO_CN_HOA_DON_ foreign key (HDM_ID)
      references HOA_DON_MUA (HDM_ID)
      on update restrict
      on delete restrict;

alter table HOA_DON_BAN
   add constraint FK_HOA_DON__KH_HDB_KHACH_HA foreign key (KH_ID)
      references KHACH_HANG (KH_ID)
      on update restrict
      on delete restrict;

alter table HOA_DON_BAN
   add constraint FK_HOA_DON__NV_LAP_HD_NHAN_VIE foreign key (NV_ID)
      references NHAN_VIEN (NV_ID)
      on update restrict
      on delete restrict;

alter table HOA_DON_MUA
   add constraint FK_HOA_DON__NCC_CO_HD_NHA_CUNG foreign key (NCC_ID)
      references NHA_CUNG_CAP (NCC_ID)
      on update restrict
      on delete restrict;

alter table PHIEU_CHI
   add constraint FK_PHIEU_CH_NV_LAP_PC_NHAN_VIE foreign key (NV_ID)
      references NHAN_VIEN (NV_ID)
      on update restrict
      on delete restrict;

alter table PHIEU_CHI
   add constraint FK_PHIEU_CH_PC_HDM_HOA_DON_ foreign key (HDM_ID)
      references HOA_DON_MUA (HDM_ID)
      on update restrict
      on delete restrict;

alter table PHIEU_CHI
   add constraint FK_PHIEU_CH_PC_TKKT_TAIKHOAN foreign key (TKKT_ID)
      references TAIKHOAN_KETOAN (TKKT_ID)
      on update restrict
      on delete restrict;

alter table PHIEU_THU
   add constraint FK_PHIEU_TH_NV_LAP_PT_NHAN_VIE foreign key (NV_ID)
      references NHAN_VIEN (NV_ID)
      on update restrict
      on delete restrict;

alter table PHIEU_THU
   add constraint FK_PHIEU_TH_PT_HDB_HOA_DON_ foreign key (HDB_ID)
      references HOA_DON_BAN (HDB_ID)
      on update restrict
      on delete restrict;

alter table PHIEU_THU
   add constraint FK_PHIEU_TH_PT_TKKT_TAIKHOAN foreign key (TKKT_ID)
      references TAIKHOAN_KETOAN (TKKT_ID)
      on update restrict
      on delete restrict;

alter table TAI_KHOAN
   add constraint FK_TAI_KHOA_TK_KT_NHAN_VIE foreign key (NV_ID)
      references NHAN_VIEN (NV_ID)
      on update restrict
      on delete restrict;

