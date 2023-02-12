import { ComponentFixture, TestBed } from '@angular/core/testing';

import { PainelVagasComponent } from './painel-vagas.component';

describe('PainelVagasComponent', () => {
  let component: PainelVagasComponent;
  let fixture: ComponentFixture<PainelVagasComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      declarations: [ PainelVagasComponent ]
    })
    .compileComponents();
  });

  beforeEach(() => {
    fixture = TestBed.createComponent(PainelVagasComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
